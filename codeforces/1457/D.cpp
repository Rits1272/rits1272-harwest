#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n; cin >> n;
	vector<int> a(n+1), b(n+1), c(33);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = log2(a[i]);
		//println(b[i])
		c[b[i]]++;
	}
	for(int i = 1; i <= 32; i++){
		if(c[i] > 2){
			//println(i)
			cout << 1 << "\n";
			return 0;
		}
	}
	int ans = INF;
	vector<int> s(n+1, 0);
	for(int i = 1; i <= n; i++){
		s[i] = s[i-1]^a[i];
	}
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			for(int k = i; k < j; k++){
				if((s[k]^s[i-1]) > (s[k]^s[j])){
					ans = min(ans, j-i-1);
				}
			}
		}
	}
	cout << (ans == INF ? -1 : ans);
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
