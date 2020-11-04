#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << #x << "[" << x << "]";
#define println(x) cout << #x << "[" << x << "]" << "\n";
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define INF 1e18 + 5
#define MOD 1e9 + 7

void solve(){
	string s; cin >> s;
	reverse(s.begin(), s.end());
	string cur = "";
	for(int i = 0; i < (int)s.size(); i++){
		cur += s[i];
		if(cur == "op"){
			cout << "FILIPINO";
			return;
		}
		else if(cur == "used" || cur == "usam"){
			cout << "JAPANESE";
			return;
		}
		else if(cur == "adinm"){
			cout << "KOREAN";
			return;
		}
	}
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int tt = 1;
	cin >> tt;
	while(tt--){
		solve();
		cout << '\n';
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n'; 
}