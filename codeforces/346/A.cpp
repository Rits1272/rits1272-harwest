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

int GCD(int a, int b){
    if(a == 0)
	return b;
    return GCD(b%a, a);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int gcd = 0, mx = -1;
    for(int i = 0; i < n; i++){
	int x; cin >> x;
	gcd = GCD(x, gcd);
	mx = max(mx, x);
    }
    int rounds = mx/gcd - n;
    if(rounds&1)
	cout << "Alice\n";
    else
	cout << "Bob\n";
    return 0;
}
