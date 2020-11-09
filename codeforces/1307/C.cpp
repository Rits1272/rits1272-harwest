#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define pb push_back
#define INF 1e18 + 5
#define MOD 1e9 + 7

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	string s; cin >> s;
	int n = s.size();
	int arr[26][26];
	memset(arr, 0, sizeof(arr));
	unordered_map<char,int> mp;
	for(int i = 0; i < n; i++){
		for(int c = 0; c < 26; c++){
			arr[c][s[i]-'a'] += mp[c];
		}
		mp[s[i]-'a']++;
	}
	int ans = 1;
	for(pair<int, int> p: mp)
		ans = max(ans, p.second);
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 26; j++){
			ans = max(ans, arr[i][j]);
		}
	}
	cout << ans << '\n';
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}