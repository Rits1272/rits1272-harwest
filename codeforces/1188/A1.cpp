/**
*  author: rits1272
*  created: Oct 24, 2020
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
    int n; cin >> n;
    int d[n+1];
    memset(d, 0, sizeof(d));
    for(int i = 1; i < n; i++){
	int u, v; cin >> u >> v;
	d[u]++;
	d[v]++;
    }
    bool ok = 1;
    for(int i = 1; i <= n && ok; i++){
	//println(d[i])
	ok = d[i]^2;
    }
    cout << (ok ? "YES\n": "NO\n");
    return 0;
}
