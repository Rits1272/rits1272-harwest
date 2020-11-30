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

void test_case(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n*k);
	for(int i = 0; i < n*k; i++){
		cin >> a[i];
	}
	int pos = (n+1)/2 - 1;
	int ans = 0;
	int right = n*k - 1, left = 0;
	if(pos == 0){
		for(int i = 0; i < n*k; i+=n){
			ans += a[i];
		}
		cout << ans << "\n";
		return;
	}
	// iterate all smaller values before pos
	// Then take largest values possible after pos
	while(left < right){
		left += pos;
		int rem = n-pos;
		right -= rem;
		ans += a[right+1];
	}
	cout << ans << "\n";
	return;
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
