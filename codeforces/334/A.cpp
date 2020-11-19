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
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n; cin >> n;
	int low = 1, high = n*n;
	int cnt = 0;
	while(low < high){
		cout << low << " " << high << " ";
		low++;
		high--;
		cnt += 2;
		if(cnt == n){
			cout << "\n";
			cnt = 0;
		}
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}