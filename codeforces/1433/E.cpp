/**
*  author: rits1272
*  created: Oct 21, 2020
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
    if(n == 2){
	cout << 1 << "\n";
	return 0;
    }
    int fact[21];
    int val = 1;
    for(int i = 1; i <= 20; i++){
	val *= i;
	fact[i] = val;
    }
    int ans = 0.5 * fact[n]/(fact[n/2] * fact[n/2]) * fact[n/2-1] * fact[n/2 - 1];
    cout << ans << '\n';
    return 0;
}
