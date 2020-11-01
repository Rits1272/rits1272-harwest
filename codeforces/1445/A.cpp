/**
*  author: rits1272
*  created: Nov 01, 2020
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
    int n, x; cin >> n >> x;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
	cin >> a[i];
    for(int i = 0; i < n; i++)
	cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < n; i++){
	if(a[i]+b[i] > x){
	    cout << "No\n";
	    return;
	}
    }
    cout << "Yes\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
	master();
    }
    return 0;
}
