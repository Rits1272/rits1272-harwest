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

int n, k;
vector<int> a, pre;

void test_case(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n), pre(2*k+2);
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	unordered_map<int, int> mp;
	int start = 0, end = n - 1;
	
	while(start < end){
		mp[a[start]+a[end]]++;
		pre[1+min(a[start], a[end])]++;
		pre[k+max(a[start], a[end])+1]--;
		start++;
		end--;
	}
	
	for(int i = 1; i < (int)pre.size(); i++){
		pre[i] += pre[i-1];
	}
	
	int ans = INF;
	
	for(int x = 2; x <= 2*k; x++){
		ans = min(ans, (pre[x]-mp[x]) + 2*(n/2-pre[x]));
	}
	
	cout << ans << "\n";
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
