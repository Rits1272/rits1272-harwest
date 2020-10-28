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
const int mod = 1e8;
const int INF = 1e18;

int dp[101][101][11][11];

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    for(int i = 0; i <= n1; ++i){
        for(int j = 0; j<= n2; ++j){
            for(int a = 0; a<= k1; ++a){
                for(int b = 0; b <= k2; ++b){
                    int ans = 0;
                    if(i + j == 0){
                        ans = 1;
                    } else {
                        if(i > 0 && a > 0){
                            ans += dp[i - 1][j][a - 1][k2];
                            ans %= mod;
                        }
                        if(j > 0 && b > 0){
                            ans += dp[i][j - 1][k1][b - 1];
                            ans %= mod;
                        }
                    }
                    dp[i][j][a][b] = ans;
                }
            }
        }
    }

    cout << dp[n1][n2][k1][k2] << endl;
    return 0;
}
