/**
*  author: rits1272
*  created: Oct 24, 2020
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
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for(int i = 0; i < n; i++){
	int x; cin >> x;
	sum += x;
    }
    if(sum == m)
	cout << "YES\n";
    else
	cout << "NO\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	master();
    }
    return 0;
}
