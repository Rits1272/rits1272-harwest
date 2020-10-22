/**
*  author: rits1272
*  created: Oct 22, 2020
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
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    for(int&x: a)
	cin >> x;
    k = min(k, m-1);
    int ans = 0;
    for(int i = 0; i <= k; i++){
	int cant_control = m-1-k;
	int local = 1e9;
	for(int j = 0; j <= cant_control; j++){
	    int back = k-i+cant_control-j;
	    local = min(local, max(a[i+j], a[n-back-1]));
	}
	ans = max(ans, local);
    }
    cout << ans << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--)
	master();
    return 0;
}
