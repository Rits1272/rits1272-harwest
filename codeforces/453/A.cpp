/**
*  author: rits1272
*  created: Oct 20, 2020
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
    int n, m; cin >> m >> n;
    double ans = 0;
    for(int i = 1; i <= m; i++){
	ans += (pow((double)i/m, n) - pow((double)(i-1)/m, n)) * i;
    }	
    cout << fixed << setprecision(9) << ans << '\n';
    return 0;
}
