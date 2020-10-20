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

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, I; cin >> n >> I;
    int a[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    sort(a, a+n);
    int k = (8 * I)/n;
    int K = (k < 30 ? (1 << k) : n);
    //print(K)
    int r = 0, ans = 0, diff = 0;
    for(int i = 0; i < n; i++){
	while(r < n){
	    if(r > i && a[r] == a[r-1])
		r++;
	    else{
		if(diff == K){
		    // we got subsegment of K distinct values here
		    break;
		}
		++diff;
		++r;
	    }
	}
	//print(i) println(r)
	ans = max(ans, r - i);
	//println(ans)
	if(i+1 < n && a[i] != a[i+1])
	    diff--;
    }
    cout << n - ans << '\n';
    return 0;
}
