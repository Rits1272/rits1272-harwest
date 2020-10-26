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

int mul(int a, int b, int m){
    int res = a*b;
    res %= m;
    return res;
}

int add(int a, int b, int m){
    int res = a + b;
    res %= m;
    return res;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int fact[n+1];
    fact[0] = 1;
    for(int i = 1; i <= n; i++){
	fact[i] = mul(i, fact[i-1], m);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
	ans += (fact[i] * fact[n-i+1])%m * i%m;
	ans %= m;
    }
    cout << ans << '\n';
    return 0;
}
