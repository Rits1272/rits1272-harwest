/**
*  author: rits1272
*  created: Oct 29, 2020
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
    int ans[n][n];
    int cur = 0;
    for(int row = 0; row < n/2; row++){
	for(int col = 0; col < n/2; col++){
	    ans[row][col] = 4*cur + 1;
	    ans[row][col+n/2] = 4*cur + 2;
	    ans[row+n/2][col] = 4*cur + 3;
	    ans[row+n/2][col+n/2] = 4*cur;
	    cur++;
	}
    }

    for(int row = 0; row < n; row++){
	for(int col = 0; col < n; col++){
	    cout << ans[row][col] << " ";
	}
	cout << '\n';
    }
    return 0;
}
