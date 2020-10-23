/**
*  author: rits1272
*  created: Oct 23, 2020
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
    int a, b, ans = 0; cin >> a >> b;
    while(a > 0 && b > 0){
	if(a > b){
	    ans += a/b;
	    a %= b;
	}
	else{
	    ans += b/a;
	    b %= a;
	}
    }
    cout << ans << '\n';
    return 0;
}
