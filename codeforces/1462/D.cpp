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

void test_case(){
	int n; cin >> n;
	int sum = 0;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	int ans = n-1;
	set<int> possible;
	for(int i = 2; i <= sum; i++){
		int x = sum;
		while(x%i == 0){
			x/=i;
			possible.insert(x);
		}
	}
	possible.insert(sum);
	for(int x: possible){
		//println(x)
		int cur = 0;
		bool yes = true;
		int local = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == x && cur == 0){
				continue;
			}
			cur += a[i];
			if(cur == x){
				cur = 0;
			}
			else if(cur > x){
				yes = false;
				break;
			}
			else{
				++local;
			}
		}
		if(yes && cur == 0){
			ans = min(ans, local);
		}
	}
	cout << ans << '\n';
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

