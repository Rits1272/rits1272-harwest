/**
*  author: rits1272
*  created: Oct 26, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

bool custom(pair<int, int> &a, pair<int, int> &b){
    return (a.first - a.second) > (b.first - b.second);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++){
	int x, y; cin >> x >> y;
	a.push_back({x, y});
    }
    sort(a.begin(), a.end(), custom);
    int ans = 0;
    for(int i = 0; i < n; i++){
	ans += i*a[i].first + (n-i-1)*a[i].second;
    }
    cout << ans << '\n';
    return 0;
}
