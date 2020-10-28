/**
*  author: rits1272
*  created: Oct 28, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = 1e9;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	    cin >> a[i];
	int lst = 0;
	vector<int> h(n, 1e9);
	h[0] = 0;
	for(int i = 1; i < n; i++){
	    if(i-1 > 0 && a[i] < a[i-1])
		lst++;
	    h[i] = h[lst] + 1;
	}
	cout << h[n-1] << "\n";
    }
    return 0;
}
