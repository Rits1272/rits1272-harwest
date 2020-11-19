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

void flip(char &a){
	if(a == '1'){
		a = '0';
	}
	else{
		a = '1';
	}
}

void test_case(){
	int n; cin >> n;
	string a, b; cin >> a >> b;
	vector<int> ans;
	for(int i = n-1; i >= 0; i--){
		if(a[i] == b[i]){
			continue;
		}
		else{
			if(i == 0 && a[i] != b[i]){
				ans.pb(1);
				flip(a[i]);
				continue;
			}
			if(a[0] != a[i]){
				ans.pb(1);
				flip(a[0]);
			}
			if(i > 0){
				for(int j = 0; j <= i; j++){
					flip(a[j]);
				}
				reverse(a.begin(), a.begin()+i+1);
				ans.pb(i+1);
			}
			//~ println(a)
		}
	}
	//~ print(a) println(b)
	cout << ans.size() << " ";
	show(ans);
	cout << "\n";
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
