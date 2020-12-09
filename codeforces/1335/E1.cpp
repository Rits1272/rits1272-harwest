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
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<vector<int>> pre(n, vector<int>(27));
	for(int i = 0; i < n; i++){
		if(i > 0) pre[i] = pre[i-1];
		pre[i][a[i]]++;
	}
	int ans = 1;
	for(int aa = 1; aa <= 26; aa++){
		for(int start = 0; start < n; start++){
			for(int end = start; end < n; end++){
				int local = min((start > 0 ? pre[start-1][aa] : 0), pre[n-1][aa]-pre[end][aa]);
				int mx = 0;
				for(int b = 1; b <= 26; b++){
					mx = max(mx, pre[end][b]-(start>0?pre[start-1][b]:0));
				}
				ans = max(ans, local*2+mx);
			}
		}
	}
	cout << ans << '\n';
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

