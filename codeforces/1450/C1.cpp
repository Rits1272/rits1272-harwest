/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << (i == (int)v.size() ? "\n" : " ");
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

const int N = 301;
string grid[N];

void test_case(){
	int n; cin >> n;
	int k = 0;
	vector<int> cnt(3, 0);
	for(int i = 0; i < n; i++){
		cin >> grid[i];
		for(int j = 0; j < n; j++){
			int c = (i+j)%3;
			if(grid[i][j] == 'X'){
				cnt[c]++;
				k++;
			}
		}
	}
	
	int flip = 0, mn = INF;
	for(int i = 0; i < 3; i++){
		print(i) println(cnt[i])
		if(cnt[i] < mn){
			mn = cnt[i];
			flip = i;
		}
	}
	
	println(flip)
	int op = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int c = (i+j)%3;
			if(c == flip && grid[i][j] == 'X'){
				grid[i][j] = 'O';
				++op;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << grid[i][j];
		}
		cout << "\n";
	}
	
	assert(op <= k/3);
	return;
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
 */ 

