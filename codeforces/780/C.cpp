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

const int mxN = 2e5 + 5;
int n, mx = 0;
vector<vector<int>> adj(mxN);
vector<int> color(mxN, -1);
int father[mxN];

void dfs(int node, int p){
    int c = 1;
    for(int child : adj[node]){
	if(child != p){
	    while(c == color[node] || c == color[p])
		c++;
	    color[child] = c++;
	    dfs(child, node);
	}
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i < n; i++){
	int u, v; cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
    }
    //int mx = 0, xnode;
    for(int node = 1; node <= n; node++){
	if(mx < (int) adj[node].size()){
	    mx = adj[node].size();
	    //xnode = node;
	}
    }
    mx++;
    if(mx < 3 && n > 3)
	mx++;
    cout << mx << '\n'; // max colors to be used;
    color[1] = 1;
    dfs(1, 1);
    for(int i = 1; i <= n; i++)
	cout << color[i] << " ";
    cout << "\n";
    return 0;
}
