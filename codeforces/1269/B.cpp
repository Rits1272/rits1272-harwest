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

map<int, int> mp, ump;

bool check(){
    return mp == ump;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    for(int i = 0; i < n; i++){
	cin >> b[i];
	mp[b[i]]++;
    }
    int x = 1e18;
    for(int i = 0; i < n; i++){
	ump.clear();
	int possible = (b[0]-a[i]+m)%m;
	for(int j = 0; j < n; j++){
	    ump[(a[j]+possible)%m]++;
	}
	if(mp == ump)
	    x = min(x, possible);
    }
    cout << x << '\n';
    return 0;
}
