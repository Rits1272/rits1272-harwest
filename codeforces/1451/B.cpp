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

int n, q;
string s;

void test_case(){
	cin >> n >> q;
	cin >> s;
	while(q--){
		int l, r; cin >> l >> r;
		--l, --r;
		char last = s[r];
		bool found = false;
		for(int i = r+1; i < n; i++){
			if(s[i] == last){
				found = true;
				break;
			}
		}
		
		if(!found){
			char first = s[l];
			for(int i = 0; i < l; i++){
				if(s[i] == first){
					found = true;
					break;
				}
			}
		}
		cout << (found ? "YES\n" : "NO\n");
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
