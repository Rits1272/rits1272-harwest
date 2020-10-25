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

const int mxN = 2e5 + 5;
vector<int> adj[mxN];
vector<int> cnt(mxN), nleaf(mxN), dp(mxN), total_cnt(mxN);

void dfs(int node, int p = -1){
    nleaf[node] = !(adj[node].size());
    total_cnt[node] = cnt[node];
    dp[node] = 0;
    for(int child : adj[node]){
	if(child != p){
	    dfs(child, node);
	    nleaf[node] += nleaf[child];
	    total_cnt[node] += total_cnt[child];
	    dp[node] = max(dp[node], dp[child]);
	}
    }
    dp[node] = max(dp[node], (total_cnt[node] + nleaf[node] - 1)/nleaf[node]); 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
	int node; cin >> node;
	--node;
	adj[node].pb(i+1);
    }
    for(int i = 0; i < n; i++)
	cin >> cnt[i];
    dfs(0);
    cout << dp[0] << '\n';
    return 0;
}
