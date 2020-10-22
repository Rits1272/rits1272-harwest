/**
*  author: rits1272
*  created: Oct 22, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const string x = "RGB";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int ans = 1e9;
	for(int i = 0; i < 3; i++){
	    vector<int> res(n);
	    int cur = 0;
	    for(int j = 0; j < n; j++){
		res[j] = (s[j] != x[(i+j)%3]);
		cur += res[j];
		if(j >= k)
		    cur -= res[j-k];
		if(j >= k-1)
		    ans = min(ans, cur);
	    }
	}
	cout << ans << '\n';
    }		
    return 0;
}
