/**
*  author: rits1272
*  created: Oct 15, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	int n, p, k;
	cin >> n >> p >> k;
	int cost[n+1];
	for(int i = 1; i <= n; i++)
	    cin >> cost[i];
	sort(cost + 1, cost + n + 1);
	int ans = 0, dp[n+1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
	    dp[i] = dp[i-1] + cost[i];
	    if(i >= k)
		dp[i] = min(dp[i], dp[i-k] + cost[i]);
	    if(dp[i] <= p)
		ans = max(ans, i);
	}
	cout << ans << '\n';
    }
    return 0;
}
