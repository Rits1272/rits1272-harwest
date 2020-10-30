/**
*  author: rits1272
*  created: Oct 30, 2020
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
    int a, b;
    if(n&1){
	//cout << 9 << " " << 9+n << '\n';
	a = 9;
	b = n+9;
    }
    else{
	a = 4;
	b = n+4;
    }
    if(a < b)
	swap(a, b);
    cout << a << " " << b << "\n";
    return 0;
}
