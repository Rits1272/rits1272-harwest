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

string a, b;
int n, m;
vector<int> p;
vector<bool> mark;

bool check(int x){
	mark.assign(n, false);
	for(int i = 0; i < x; i++){
		mark[p[i]] = true;
	}
	string res = "";
	for(int i = 0; i < n; i++){
		if(!mark[i]){
			res += a[i];
		}
	}
	//println(res)
	int k = res.size();
	int j = 0;
	for(int i = 0; i < k && j < m; i++){
		if(res[i] == b[j]){
			++j;
		}
	}
	return (j == m);
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	cin >> a >> b;
	n = a.size();
	m = b.size();
	p.resize(n);
	for(int i = 0; i < n; i++){
		cin >> p[i];
		--p[i];
	}
	int low = 0, high = n;
	int ans = 0;
	while(low <= high){
		int mid = (high+low)/2;
		//print(mid) print(low) println(high)
		if(check(mid)){
			ans = mid;
			low = mid + 1;
		}
		else{
			high = mid-1;
		}
	}
	cout << ans << '\n';
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

