#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define MAX 1e9
#define MIN -1e9
#define MOD 1000000007
#define println(x) cout << "[" << #x << ":" << x << "]\n"; 
#define print(x) cout << "[" << #x << ":" << x << "] "; 


void solve(){
	int n, k, d;
	cin >> n >> k >> d;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	map<int, int> mp;
	int ans = 0, cnt = 0;
	for(int i=0; i<d; i++){
		if(mp[v[i]] == 0)
			cnt++;
		mp[v[i]]++;
	}
	ans = cnt;
	for(int i=d; i<n; i++){
		mp[v[i-d]]--;
		if(mp[v[i-d]] == 0)
			cnt--;
		if(mp[v[i]] == 0)
			cnt++;
		mp[v[i]]++;
		ans = min(ans, cnt);
	}
	cout << ans << "\n";
	return;
}

int main(){
	ios::sync_with_stdio(0); 
    cin.tie(0); 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}