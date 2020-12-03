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

const int N = 101;
int mat[N][N], n, m;

int getCost(vector<int> a){
	sort(a.begin(), a.end());
	int med = a[1];
	int cost = 0;
	for(int i = 0; i < 4; i++){
		cost += abs(med-a[i]);
	}
	med = a[2];
	int tmp = 0;
	for(int i = 0; i < 4; i++){
		tmp += abs(med-a[i]);
	}
	return min(cost, tmp);
}

void test_case(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
	int cost = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(mat[i][j] != -1){
				cost += getCost({mat[i][j], mat[n-1-i][j], mat[i][m-1-j]
					, mat[n-i-1][m-j-1]});
			}
		}
	}
	cout << cost/4 << "\n";
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
