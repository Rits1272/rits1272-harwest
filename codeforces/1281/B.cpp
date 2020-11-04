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
	string a, b; cin >> a >> b;
	for(int i = 0; i < (int)a.size(); i++){
		int idx = i;
		for(int j = (int)a.size()-1; j > i; j--){
			if(a[j]<a[idx]){
				idx = j;
			}
		}
		if(idx != i){
			swap(a[idx], a[i]);
			break;
		}
	}
	cout << (a<b ? a : "---");
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