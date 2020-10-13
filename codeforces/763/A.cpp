/**
*  author: rits1272
*  created: Oct 13, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<int, int>> adj;
    for(int i = 1; i < n; i++){
	int u, v; cin >> u >> v;
	adj.push_back({u, v});
    }

    int colors[n+1];
    for(int i = 1; i <= n; i++)
	cin >> colors[i];

    vector<pair<int, int>> magic;
    for(int i = 0; i < n - 1; i++){
	if(colors[adj[i].first] != colors[adj[i].second])
	    magic.push_back(adj[i]);
    }
    if(magic.size() == 0){
	cout << "YES\n1" << '\n';
	return 0;
    }
    map<int, int> mp;
    for(auto x: magic){
	mp[x.first]++;
	mp[x.second]++;
    }

    for(auto x: mp){
	if(mp[x.first] == (int)magic.size()){
	    cout << "YES\n" << x.first << '\n';
	    return 0;
	}
    }

    cout << "NO\n";
    return 0;
}
