/**
*  author: rits1272
*  created: Oct 26, 2020
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
    string s; cin >> s;
    int dp[n+1][2][3];
    // dp[i][ld][0] : Not yet started flipping
    // dp[i][ld]]1] : Flipping started but not yet ended
    // dp[i][ld][2] : Flipping ended
    // ans = max of dp[1 to n][0 to 3]
    memset(dp, 0, sizeof(dp));
    if(s[0] == '0'){
	dp[0][0][0] = 1;
	dp[0][0][1] = 1;
	dp[0][0][2] = 1;
    }
    else{
	dp[0][1][0] = 1;
	dp[0][1][1] = 1;
	dp[0][1][2] = 1;
    }
    int ans = 0;
    for(int i = 1; i < n; i++){
	if(s[i] == '1'){
	    // dp[index][last_digit][condition]
	    dp[i][1][0] = max(dp[i-1][1][0], dp[i-1][0][0] + 1);
	    dp[i][1][1] = max(dp[i-1][1][0], dp[i-1][0][1]) + 1;
	    dp[i][1][2] = max({dp[i-1][0][0], dp[i-1][1][1], dp[i-1][0][2]}) + 1;
	}
	else{
	    dp[i][0][0] = max(dp[i-1][0][0], dp[i-1][1][0] + 1);
	    dp[i][0][1] = max(dp[i-1][0][0], dp[i-1][1][1]) + 1;
	    dp[i][0][2] = max({dp[i-1][1][0], dp[i-1][0][1], dp[i-1][1][2]}) + 1;
	}
    }

    for(int i = 0; i < n; i++){
	for(int last_digit : {0, 1}){
	    for(int condt : {0, 1, 2}){
		ans = max(ans, dp[i][last_digit][condt]);
	    }	
	}
    }
    cout << ans << '\n';
    return 0;
}
