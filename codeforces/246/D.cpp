/**
*  author: rits1272
*  created: Oct 22, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = 1e5 + 5;
int n, m;
vector<int> color[mxN], adj[mxN];
vector<int> rang(mxN);

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
	cin >> rang[i];
	color[rang[i]].push_back(i);
    }
    for(int i = 0; i < m; i++){
	int u, v; cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
    }
    int ans = 1e9, mx = 0;
    for(int i = 1; i <= 1e5; i++){
	if(color[i].size() == 0)
	    continue;
	set<int> s;
	for(int node : color[i]){
	    for(int child : adj[node]){
		if(rang[child] != rang[node]){
		    s.insert(rang[child]);
		}
	    }
	}
	int cnt = s.size();
	if(cnt >= mx){
	    if(cnt == mx)
		ans = min(ans, i);
	    else{
		mx = cnt;
		ans = i;
	    }
	}
    }
    cout << ans << '\n';
    return 0;
}
