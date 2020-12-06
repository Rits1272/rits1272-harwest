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

int dst(int x1, int y1, int x2, int y2){
	return abs(x1-x2) + abs(y1-y2);
} 

void test_case(){
	int n, k; cin >> n >> k;
	vector<int> x(n), y(n);
	set<int> xx, yy;
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
		xx.insert(x[i]);
		yy.insert(y[i]);
	}
	if(xx.size() == 1 && yy.size() == 1){
		cout << 0 << "\n";
		return;
	}
	bool one = false;
	for(int i = 0; i < n; i++){
		bool possible = true;
		for(int j = 0; j < n; j++){
			if(i == j){
				continue;
			}
			if(dst(x[i], y[i], x[j], y[j]) > k){
				possible = false;
				break;
			}
		}
		if(possible){
			one = true;
			break;
		}
	}
	cout << (one ? 1 : -1) << "\n";
	return;
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
