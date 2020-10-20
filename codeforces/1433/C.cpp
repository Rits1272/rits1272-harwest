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

void master(){
    int n; cin >> n;
    int a[n];
    int mx = 0;
    for(int i = 0; i < n; i++){
	cin >> a[i];
	mx = max(mx, a[i]);
    }
    for(int i = 0; i < n; i++){
	if(a[i] == mx){
	    if(i > 0 && a[i-1] != mx){
		cout << i + 1 << '\n';
		return;
	    }
	    else if(i + 1 < n && a[i+1] != mx){
		cout << i + 1 << '\n';
		return;
	    }  
	}
    }
    cout << -1 << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
