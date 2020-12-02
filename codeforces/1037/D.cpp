/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

/*
 * The order of nodes should be same as order of their children.
 * There should be an increase of 1 depth only. A node with depth change more than 1 is not possible.
 */

const int N = 2e5 + 5;
vector<int> adj[N];
vector<int> reorder(N);
int n;

bool comp(int a, int b){
	return(reorder[a] < reorder[b]);
}

vector<int> bfs(){
	queue<int> q;
	q.push(1);
	vector<bool> vis(n+1, false);
	vis[1] = true;
	vector<int> order;
	while(q.size()){
		int u = q.front(); q.pop();
		order.pb(u);
		for(int v: adj[u]){
			if(!vis[v]){
				q.push(v);
				vis[v] = true;
			}
		}
	}
	return order;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	cin >> n;
	for(int i = 1; i < n; i++){
		int u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector<int> sq(n);
	for(int i = 0; i < n; i++){
		cin >> sq[i];
		reorder[sq[i]] = i;
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end(), comp);
	}
	cout << (bfs() == sq ? "Yes\n" : "No\n");
	return 0; 
}
