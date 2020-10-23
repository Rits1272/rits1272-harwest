/**
*  author: rits1272
*  created: Oct 23, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<pair<int, int>> songs;
    for(int i = 0; i < n; i++){
	int l, b; cin >> l >> b;
	songs.push_back({l, b});
    }
    sort(songs.begin(), songs.end(), [&](const pair<int, int> &a, const pair<int, int> &b){
	if(a.second != b.second)
	    return a.second < b.second;
	return a.first < b.first;
    });
    multiset<int> s;
    int ans = -1;
    int cur = 0;
    for(int i = n - 1; i >= 0; i--){
	int b = songs[i].second;
	cur += songs[i].first;
	ans = max(ans, b*cur);
	s.insert(songs[i].first);
	if((int) s.size() >= k){
	    cur -= *s.begin();
	    s.erase(s.begin());
	}
    }
    cout << ans << '\n';
    return 0;
}
