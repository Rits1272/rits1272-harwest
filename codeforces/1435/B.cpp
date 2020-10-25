/**
*  author: rits1272
*  created: Oct 25, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

void master(){
    int n, m; cin >> n >> m;
    vector<vector<int>> rows;
    unordered_map<int, int> idx;
    for(int i = 0; i < n; i++){
	vector<int> tmp;
	for(int j = 0; j < m; j++){
	    int x; cin >> x;
	    if(j == 0)
		idx[x] = i + 1;
	    tmp.push_back(x);
	}
	rows.push_back(tmp);
    }
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    int col; cin >> col;
	    if(idx[col] > 0){
		ans[j] = rows[idx[col]-1]; 
	    }
	}
    }
    for(int i = 0; i < n; i++){
	for(int j = 0; j < m; j++){
	    cout << ans[i][j] << " ";
	}
	cout << '\n';
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
