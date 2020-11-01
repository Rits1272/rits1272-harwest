/**
*  author: rits1272
*  created: Nov 01, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 998244353;
const int INF = 1e18;

int po(int x, int p){
    x%=MOD;
    int res = 1;
    while(p>0){
	if(p&1)
	    res = (res*x)%MOD;
	p>>=1;
	x = (x*x)%MOD;
    }
    return res;
}

int inverse(int n){
    return po(n, MOD-2);
}

int ncr(int n, int r){
    if(n < r)
	return 0;
    if(r == 0)
	return 1;
    int fac[n+1];
    fac[0] = 1;
    for(int i = 1; i <= n; i++)
	fac[i] = (fac[i-1]*i)%MOD;
    return (fac[n]*inverse(fac[r])%MOD*inverse(fac[n-r])%MOD)%MOD;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> a(2*n);
    for(int i = 0; i < 2*n; i++)
	cin >> a[i];
    sort(a.begin(), a.end());
    int tt = 0;
    for(int i = 0; i < n; i++)
	tt += abs(a[2*n-i-1]-a[i]);
    tt%=MOD;
    int ans = tt * ncr(2*n, n);
    ans%=MOD;
    cout << ans << '\n';
    return 0;
}
