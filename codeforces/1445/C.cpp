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

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	int p, q; cin >> p >> q;
	unordered_map<int, int> mp;
	if(p%q != 0){
	    cout << p << '\n';
	    continue;
	}
	vector<int> factors;
	if(q%2 == 0){
	    factors.pb(2);
	    while(q%2 == 0){
		q/=2;
		mp[2]++;
	    }
	}
	for(int i = 3; i*i <= q; i+=2){
	    if(q%i == 0){
		factors.pb(i);
		while(q%i == 0){
		    q/=i;
		    mp[i]++;
		}
	    }
	}
	if(q>1)
	    factors.pb(q);
	sort(factors.begin(), factors.end());
	int ans = -1e9;
	for(int f: factors){
	    int res = p;
	    while(res%f == 0)
		res/=f;
	    for(int i = 0; i < mp[f]-1; i++)
		res*=f;
	    ans = max(ans, res);
	}
	cout << ans << "\n";
    }
    return 0;
}
