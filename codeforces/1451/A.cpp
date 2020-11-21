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
	if(n == 1){
		cout << 0 << "\n";
	}
	else if(n == 2){
		cout << 1 << "\n";
	}
	else if(n == 3){
		cout << 2 << "\n";
	}
	else if(n%2 == 0){
		cout << 2 << "\n";
	}
	else{
		cout << 3 << "\n";
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
