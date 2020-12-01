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

/*
 * i] if array is sorted return 0
 * ii] Continue swapping as long as a[i] < a[i+1].
 * iii] When a[i] > a[i+1] replace x with a[i] keeping in mind the contraints.
 */

bool check(vector<int> &a){
	for(int i = 0; i + 1 < (int)a.size(); i++){
		if(a[i+1] < a[i]){
			return false;
		}
	}
	return true;
}

void test_case(){
	int n, x; 
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0, i = 0;
	while(!check(a)){
		++ans;
		while(i < n && a[i] <= x){
			++i;
		}
		if(i == n){
			cout << -1 << "\n";
			return;
		}
		swap(a[i], x);
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
