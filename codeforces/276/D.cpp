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

int onecomp(int x){
	int total = floor(log2(x)) + 1;
	return ((1 << total) - 1) ^ x;
}

void test_case(){
	int l, r; cin >> l >> r;
	int res = l^r;
	int ans = 0, bits = 0;
	while(res){
		bits++;
		res >>= 1;
	}
	int val = 1;
	while(bits--){
		ans += val;
		val <<= 1;
	}
	cout << ans << "\n";
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt = 1;
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

