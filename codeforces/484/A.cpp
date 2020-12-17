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

int msb(int x){
	if(x == 0){
		return 0;
	}
	int cnt = 0;
	x/=2;
	while(x > 0){
		x/=2;
		++cnt;
	}
	return cnt;
}

int power(int x, int y){
	int res = 1;
	for(int i = 1; i <= y; i++){
		res = res * 2;
	}
	return res;
}

int count(int x){
	int start = msb(x);
	int do_with = 1, res = 0;
	for(int i = 0; i <= start; i++){
		if(x&do_with){
			++res;
		}
		do_with *= 2;
	}
	return res;
}

vector<int> helper(int x){
	vector<int> res(64, 0);
	int start = msb(x);
	int do_with = 1;
	for(int i = 0; i <= start; i++){
		if(x&do_with){
			res[i] = 1;
		}
		do_with *= 2;
	}
	return res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		int l, r; cin >> l >> r;
		int x = msb(l), y = msb(r);
		vector<int> a = helper(l);
		vector<int> b = helper(r);
		int ans;
		if(l == r){
			ans = l;
		}
		else if(x != y){
			ans = power(2, y) - 1;
		}
		else{
			ans = power(2, x);
			bool leave = false;
			for(int bit = x-1; bit >= 0; bit--){
				if(leave){
					ans += power(2, bit);
					continue;
				}
				int one = b[bit];
				int two = a[bit];
				if(one && two){
					ans += power(2, bit);
				}
				else if(one && !two){
					leave = true;
				}
			}
		}
		print(count(r)) println(count(ans))
		if(count(r) > count(ans)){
			ans = r;
		}
		assert(ans >= l && ans <= r);
		cout << ans << "\n";
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

