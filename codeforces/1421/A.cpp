/**
*  author: rits1272
*  created: Oct 18, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

void master(){
    int a, b; cin >> a >> b;
    int c = a, d = b;
    int x = 0, j = 0;
    while(a || b){
	if((a&1) && (b&1)){
	    x += (1 << j);
	}
	a >>= 1;
	b >>= 1;
	j++;
    }
    cout << (c^x) + (d^x) << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
