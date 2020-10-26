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

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a = 0, b = 1, cnt = 0;
    while(a+b <= n){
	int c = a+b;
	//println(c)
	a = b;
	b = c;
	cnt++;
    }
    cout << cnt-1 << '\n';
    return 0;
}
