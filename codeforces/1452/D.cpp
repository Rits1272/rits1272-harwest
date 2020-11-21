#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 998244353;

int BE(int a, int b){
  int res = 1;
  while(b){
    if(b&1){
      res = (res * a) % MOD;
    }
    a = (a * a) % MOD;
    b /= 2;
  }
  return res;
}

int modInv(int a){
  return BE(a, MOD-2);
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n; cin >> n;
    int dp[n+1];
    dp[1] = 1, dp[2] = 1;
    for(int i = 3; i <= n; i++){
      dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
    int ans = dp[n] * BE(modInv(2), n);
    ans %= MOD;
    cout << ans << "\n";
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
