/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "\n" : " ");
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

void test_case(){
	int n, m; cin >> n >> m;
	vector<int> a(n+1), r(n+1), c(n+1), vis(n+1);
	int ans = 0, cnt = 0;
	for(int i = 0; i < m; i++){
		int u, v; cin >> u >> v;
		if(u != v){
			++cnt;
			r[u] = cnt;
			c[v] = cnt;
		}
	}
	
	for(int i = 1; i <= n; i++){
		if(r[i] != 0 && c[i] != 0){
			a[r[i]] = c[i];
		}
	}
	
	ans += cnt;
	cnt = 0;
	
	for(int i = 1; i <= n; i++){
		if(vis[i]){
			continue;
		}
		int j = i;
		vis[j] = ++cnt;
		while(a[j] != 0){
			j = a[j];
			vis[j] = 1;
			
			if(vis[a[j]]){
				//cycle
				if(vis[a[j]] == cnt){
					++ans;
				}
				break;
			}
		}
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
	return 0; 
}

/*
 * Only write code when you are sure of the approach.
 * Do optimized thinking (Think which technique/observation can be used).
 * Do post analysis after the contest.
 * Upsolve the problems.
 * Learn a technique and solve some problems if its new to you.
 * DON'T GET STUCK ON ONE APPROACH
 */ 

