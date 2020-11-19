#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

void test_case(){
	int n; cin >> n;
	int ans = 0, sum = 0, mx = 0, a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
		sum += a[i];
		mx = max(mx, a[i]);
	}
	int res = mx*(n-1) - sum;
	if(res < 0){
		// we have excess
		res = abs(res);
		res %= (n-1);
		if(res != 0){
			ans = max(ans, n-1-res);
		}
	}
	else{
		// we have to add more
		ans = max(ans, res);
	}
	cout << ans << '\n';
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}