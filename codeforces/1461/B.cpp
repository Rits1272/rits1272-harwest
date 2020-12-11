/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "\n" : " ");
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

// k height spruce = 1 + 2^2 + 3^2 + ... + k^2 spruces

void test_case(){
	int n, m; cin >> n >> m;
	string s[n];
	int cnt[n][m];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		for(int j = 0; j < m; j++){
			cnt[i][j] = 0;
			if(s[i][j] == '*'){
				cnt[i][j] = (j > 0 ? cnt[i][j-1] + 1 : 1);
			}
		}
	}
	int ans = 0;
	for(int row = 0; row < n; row++){
		for(int col = 0; col < m; col++){
			if(s[row][col] == '*'){
				++ans;
				int h = 1;
				bool ok = true;
				for(int r = row + 1; r < n && ok; r++){
					if(col-h >= 0 && col+h < m){
						int stars = cnt[r][col+h] - (col-h > 0 ? cnt[r][col-h-1] : 0);
						if(stars == 2*h+1){
							++ans;
						}
						else{
							ok = false;
						}
					} 
					else{
						ok = false;
					}
					++h;
				}
			}
		}
	}
	cout << ans << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	return 0; 
}

/*
 * Only write code when you are sure of the approach.
 * Do optimized thinking (Think which technique/observation can be used).
 * Do post analysis after the contest.
 * Upsolve the problems.
 * Learn a technique and solve some problems if its new to you.
 * DON'T GET STUCK ON ONE APPROACH
 */ 

