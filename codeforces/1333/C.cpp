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

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n; cin >> n;
	vector<int> a(n), pre(n+1, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		pre[i+1] = pre[i] + a[i];
	}
	int ans = 0, start = 0, end = 0;
	set<int> s = {0};
	while(start < n){
		while(end < n && !s.count(pre[end+1])){
			++end;
			s.insert(pre[end]);
		}
		ans += end - start;
		s.erase(pre[start]);
		++start;
	}
	cout << ans << "\n";
	return 0; 
}
