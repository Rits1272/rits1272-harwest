/**
*  author: rits1272
*  created: Oct 21, 2020
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
    int n, m, d; cin >> n >> m >> d;
    set<pair<int, int>> q;
    int a[n+1];
    vector<int> ans(n);
    for(int i = 1; i <= n; i++){
	cin >> a[i];
	q.insert({a[i], i});
    }
    int day = 0;
    while(q.size()){
	day++;
	int pos = q.begin()->second;
	//int time = q.begin()->first;
	ans[pos] = day;
	q.erase(q.begin());
	while(true){
	    auto it = q.lower_bound({a[pos] + d + 1, 0});
	    if(it == q.end())
		break;
	    pos = it->second;
	    q.erase(it);
	    ans[pos] = day;
	}
    }
    cout << day << '\n';
    for(int i = 1; i <= n; i++)
	cout << ans[i] << " ";
    cout << '\n';
    return 0;
}
