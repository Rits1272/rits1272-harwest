/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "\n" : " ");
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;


int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n, h, l, r;
	cin >> n >> h >> l >> r;
	vector<int> a(n), pre(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	pre[0] = a[0];
	for(int i = 1; i < n; i++){
		pre[i] = pre[i-1] + a[i];
	}
	auto is_good = [&](int time){
		time %= h;
		if(time >= l && time <= r){
			return 1;
		}
		return 0;
	};
	vector<vector<int>> dp(n+1, vector<int>(n+1, -INF));
	dp[0][0] = is_good(a[0]);
	dp[0][1] = is_good(a[0]-1);
	int ans = -INF;
	for(int i = 1; i < n; i++){
		dp[i][0] = dp[i-1][0] + is_good(pre[i]);
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j <= i+1; j++){
			dp[i][j] = max(dp[i][j], dp[i-1][j] + is_good(pre[i]-j));
			dp[i][j] = max(dp[i][j], dp[i-1][j-1] + is_good(pre[i]-j));
		}
	}
	for(int sleep = 0; sleep <= n; sleep++){
		ans = max(ans, dp[n-1][sleep]);
	}
	cout << ans << "\n";
	return 0; 
}

/*
 * Only write code when you are sure of the approach.
 * Do optimized thinking (Think which technique/observation can be used).
 * Do post analysis after the contest.
 * Upsolve the problems.
 * Learn a technique and solve some problems if its new to you.
 * DON'T GET STUCK ON ONE APPROACH
 */ 

