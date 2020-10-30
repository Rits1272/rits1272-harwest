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

void master(){
    int n; cin >> n;
    int b[n], a[2*n];
    vector<bool> vis(2*n+1, false);
    for(int i = 0; i < n; i++){
	cin >> b[i];
	a[2*i] = b[i];
	vis[b[i]] = true;
    }
    bool got = false;
    for(int i = 1; i < 2*n; i += 2){
	int nxt = a[i-1];
	while(vis[nxt] && nxt <= 2*n)
	    nxt++;
	if(nxt>2*n){
	    got = true;
	    break;
	}
	a[i] = nxt;
	vis[nxt] = true;
    }
    if(got)
	cout << -1 << "\n";
    else{
	for(int i = 0; i < 2*n; i++)
	    cout << a[i] << " ";
	cout << '\n';
    }
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
