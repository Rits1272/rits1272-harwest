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

// a b a c
// z b a b
// z b a c

// z b a c

bool possible(string x, vector<string> &a){
	for(string s: a){
		int cnt = 0;
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] != x[i]){
				++cnt;
			}
		}
		if(cnt > 1){
			return false;
		}
	}
	return true;
}

void test_case(){
	int n, m;
	cin >> n >> m;
	vector<string> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	string ans;
	for(int i = 0; i < n; i++){
		ans = a[i];
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				ans[k] = a[j][k];
				//println(ans)
				if(possible(ans, a)){
					cout << ans << "\n";
					return;
				}
			}
		}
	}
	cout << -1 << "\n";
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
