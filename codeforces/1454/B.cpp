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

const int mxN = 2e5 + 5;

int b[mxN], cnt[mxN];
void test_case(){
	int n; cin >> n;
	vector<int> a(n);
	memset(b, 0, sizeof(a));
	memset(cnt, 0, sizeof(cnt));
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]] = i+1;
		cnt[a[i]]++;
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] == 1){
			cout << b[a[i]] << "\n";
			return;
		}
	}
	cout << -1 << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int t; cin >> t;
	while(t--){
		test_case();
	}
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
