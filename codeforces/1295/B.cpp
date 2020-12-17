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

bool possible(int a, int D, int x){
	if(D == 0){
		// infinte prefixes
		return (x == a);
	}
	return (x-a)%D == 0 && (x-a)/D+1 >= 1;
}

void test_case(){
	int n, x; cin >> n >> x;
	string s; cin >> s;
	string t = s + s;
	vector<int> ones(2*n), zeroes(2*n);
	ones[0] = (t[0] == '1');
	zeroes[0] = (t[0] == '0');
	for(int i = 1; i < 2*n; i++){
		ones[i] = ones[i-1] + (t[i] == '1');
		zeroes[i] = zeroes[i-1] + (t[i] == '0');
	}
	vector<int> d(2*n);
	for(int i = 0; i < 2*n; i++){
		d[i] = zeroes[i] - ones[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		int D = d[i+n] - d[i];
		int a = d[i];
		//print(a) print(D) println(x)
		if(possible(a, D, x)){
			if(D == 0){
				cout << -1 << '\n';
				return;
			}
			++count;
		}
	}
	if(x == 0){
		++count;
	}
	cout << count << '\n';
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

