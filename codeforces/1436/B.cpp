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

void master(){
    int n; cin >> n;
    int ans[n][n];
    memset(ans, 0, sizeof(ans));
    int col = 0;
    for(int i = 0; i < n; i++){
	if(i == n-1){
	    ans[i][0] = 1;
	    ans[i][n-1] = 1;
	    continue;
	}
	ans[i][col++] = 1;
	ans[i][col] = 1;
    }
    for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
	    cout << ans[i][j] << ' ';
	}
	cout << '\n';
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	master();
    }
    return 0;
}
