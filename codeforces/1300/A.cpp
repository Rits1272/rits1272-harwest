/**
*  author: rits1272
*  created: Oct 31, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

void master(){
    int n; cin >> n;
    int a[n], cur = 0;
    int p = 1, z = 0, ans = 0;
    for(int i = 0; i < n; i++){
	cin >> a[i];
	cur += a[i];
	p *= a[i];
	z += (a[i] == 0);
    }
    if(p == 0){
	ans += z;
	cur += z;
    }
    if(cur == 0)
	ans++;
    cout << ans << '\n';
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
