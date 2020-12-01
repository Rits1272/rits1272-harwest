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
 * SUM(a1, a2, ... an) = XOR(a1, a2, ... an) + 2*AND(a1, a2, ... an)
 * a1+a2+...an = v
 * a1^a2^...an = u
 */

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int u, v;
	cin >> u >> v;
	if(v-u < 0 || ((v-u)&1)){
		cout << -1 << "\n";
		return 0;
	}
	if(v == u){
		if(u == 0){
			cout << 0 << "\n";
		}
		else{
			cout << 1 << " " << u << "\n";
		}
		return 0;
	}
	vector<int> ans = {u};
	int left = v - u;
	if((left^u) == u){
		cout << 2 << " " << u << " " << left << "\n";
	}
	else{
		ans.pb(left/2);
		ans.pb(left/2);
		if(left&1){
			ans[0] = ans[0] ^ 1;
		}
		if((ans[0]^ans[1]) == ans[0]+ans[1]){
			ans[0] = ans[0] + ans[1];
			ans.erase(ans.begin() + 1);
		}
	}
	cout << ans.size() << "\n";
	show(ans);
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
