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
	int n, cz, co, h;
	string s;
	cin >> n >> cz >> co >> h >> s;
	int ans = 0;
	int one = 0, zero = 0;
	for(char c: s){
		one += (c == '1');
		zero += (c == '0');
	}
	ans = one*co + zero*cz;
	ans = min(ans, n*cz + one*h);
	ans = min(ans, n*co + zero*h);
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
