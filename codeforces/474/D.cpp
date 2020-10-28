/**
*  author: rits1272
*  created: Oct 28, 2020
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
vector<int> dp(mxN);

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    for(int i = 0; i < mxN; i++){
	if(i < k)
	    dp[i] = 1;
	else
	    dp[i] = (dp[i-1] + dp[i-k])%MOD;
    }
    for(int i = 1; i < mxN; i++){
	dp[i] += dp[i-1];
	dp[i]%=MOD;
    }
    while(n--){
	int a, b; cin >> a >> b;
	int ans = dp[b] - dp[a-1];
	ans %= MOD;
	if(ans < 0)
	    ans += MOD;
	cout << ans << '\n';
	//cout << (dp[b] - (a > 0 ? dp[a-1] : 0))%MOD << '\n';
    }
    return 0;
}
