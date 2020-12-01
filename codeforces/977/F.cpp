/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	map<int, int> dp;
	dp[a[0]] = 1;
	for(int i = 1; i < n; i++){
		dp[a[i]] = max(dp[a[i]], dp[a[i]-1] + 1);
	}
	int k = 0, lst = -1;
	for(int i = 0; i < n; i++){
		if(dp[a[i]] > k){
			k = dp[a[i]];
			lst = a[i];
		}
	}
	cout << k << "\n";
	int start = lst - k + 1;
	for(int i = 0; i < n; i++){
		if(a[i] == start){
			cout << i + 1 << " ";
			++start;
		}
	}
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
