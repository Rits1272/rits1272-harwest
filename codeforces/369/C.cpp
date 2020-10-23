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

const int mxN = 1e5 + 5;
vector<pair<int, int>> adj[mxN];
int n;
bool repair = false;
//int so_far = 0;
vector<int> ans;

bool dfs(int node, int p){
    bool already = false;
    for(pair<int, int> &child : adj[node]){
	if(child.second == p)
	    continue;
	bool done = dfs(child.second, node);
	bool repair = (child.first == 2 ? true : false);
	if(!done && repair){
	    ans.push_back(child.second);
	    already = true;
	}
	else if(done){
	    already = true;
	}
    }
    return already;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i < n; i++){
	int u, v, x; cin >> u >> v >> x;
	adj[u].push_back({x, v});
	adj[v].push_back({x, u});
    }
    dfs(1, -1);
    cout << ans.size() << '\n';
    for(int candidates: ans)
	cout << candidates << " ";
    cout << '\n';
    return 0;
}
