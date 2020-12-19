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

const int N = 500*500;

/*
 * gcd(a, b) = gcd(a, b-a)
 * 
 * a1, a2, a3, a4, a5 ....
 * gcd(a1+c, a2+c) = gcd(a1+c, a2-a1)
 * gcd(a1+c, a3+c) = gcd(a1+c, a3-a1)
 * 
 * ans = gcd(a1+c, a2-a1, a3-a1, a4-a1....)
 */

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	vector<int> ans(m);
	int g = 0;
	for(int i = 1; i < n; i++){
		g = __gcd(g, a[i]-a[i-1]);
	}
	for(int i = 0; i < m; i++){
		ans[i] = __gcd(b[i]+a[0], g);
	}
	show(ans);
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

