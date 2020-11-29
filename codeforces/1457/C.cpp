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

int n, p, k, x, y;
string a;

void test_case(){
	cin >> n >> p >> k >> a >> x >> y;
	--p;
	vector<int> cost(n);
	for(int i = n-k; i < n; i++){
		cost[i] = (a[i] == '0' ? x : 0);
	}
	int ans = INF;
	for(int i = n - 1; i-k >= 0; i--){
		cost[i-k] = cost[i] + (a[i-k] == '0' ? x : 0);
	}
	for(int i = p; i < n; i++){
		ans = min(ans, (i-p)*y + cost[i]);
	}
	cout << ans << '\n';
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
