/**
*  author: rits1272
*  created: Oct 27, 2020
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
    int n, m; cin >> n >> m;
    if(m >= n){
	cout << n << '\n';
    }
    else{
	n -= m;
	int l = 0, r = 2e9;
	while(l < r){
	    int mid = (l+r)>>1;
	    int eaten = mid*(mid+1)>>1;
	    if(eaten >= n){
		r = mid;
	    }
	    else{
		l = mid + 1;
	    }
	}
	cout << m+l << '\n';
    }
    return 0;
}
