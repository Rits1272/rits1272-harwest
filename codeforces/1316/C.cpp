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

void master(){
    int n, m, p;
    cin >> n >> m >> p;
    int a[n], b[m];
    int ans = 0;
    for(int i = 0; i < n; i++)
	cin >> a[i];
    for(int i = 0; i < m; i++)
	cin >> b[i];
    for(int i=0; i<n; i++){
	if(a[i]%p != 0){
	    ans += i;
	    break;
	}		
    }
     for(int i=0; i<m; i++){
	if(b[i]%p != 0){
	    ans += i;
	    break;
	}		
    }
    cout << ans << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    master();
    return 0;
}
