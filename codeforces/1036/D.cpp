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

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];	
    int sum = 0;
    for(int i = 0; i < n; i++){
	cin >> a[i];
	sum += a[i];
    }
    int m; cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
	cin >> b[i];
	sum -= b[i];
    }
    if(sum != 0){
	cout << -1 << '\n';
	return 0;
    }
    int f = 0, s = 0, ans = 0;
    while(f < n && s < m){
	//print(f) println(s)
	if(a[f] == b[s]){
	    f++, s++;
	}
	else{
	   int A = a[f], B = b[s];
	   //print(A) println(B)
	   while(A != B && f < n && s < m){
		while(A<B && f < n){
		    //add_f = true;
		    A += a[++f];
		}
		while(A>B && s < m){
		    //add_s = true;
		    B += b[++s];
		}
		//print(A) print(B)
	   }
	   s++;
	   f++;
	}
	ans++;
    }
    cout << ans << '\n';
    return 0;
}
