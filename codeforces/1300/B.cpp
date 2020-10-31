/**
*  author: rits1272
*  created: Oct 31, 2020
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
    int a[2*n];
    for(int i = 0; i < 2*n; i++)
	cin >> a[i];
    sort(a, a+2*n);
    cout << a[n]-a[n-1] << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
