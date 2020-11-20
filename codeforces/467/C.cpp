#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

const int mxN = 5e3 + 5;
vector<int> pf(mxN), p(mxN);
vector<vector<int>> dp(mxN, vector<int>(mxN));

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n, m, k;
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++){
		cin >> p[i];
	}
    int cur = 0;
	for(int i = 1; i <= m; i++){
      cur += p[i];
    }
    pf[m] = cur;
    for(int i = m+1; i <= n; i++){
      pf[i] = pf[i-1] + p[i] - p[i-m];
    }
    for(int i = m; i <= n; i++){
      for(int j = 1; j <= k; j++){
        dp[i][j] = max(dp[i-1][j], dp[i][j]);
        dp[i][j] = max(dp[i-m][j-1] + pf[i], dp[i][j]);
      }
    }
    cout << dp[n][k] << '\n';
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
