/**
*  author: rits1272
*  created: Oct 29, 2020
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
    int tt; cin >> tt;
    while(tt--){
	int n, a, b; cin >> a >> b >> n;
	int two = a^b;
	int x = n%3;
	if(x == 0)
	    cout << a << '\n';
	else if(x == 1)
	    cout << b << '\n';
	else
	    cout << two << '\n';
    }
    return 0;
}
