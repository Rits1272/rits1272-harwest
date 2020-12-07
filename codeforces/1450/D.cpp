/*
 * author : rits1272
 */
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) c		err << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "\n" : " ");
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

const int N = 3e5 + 5;
int a[N], n, tree[4*N+10];

void build(int l, int r, int i){
	if(l+1 == r){
		tree[i] = a[l];
		return;
	}
	else{
		int mid = (l+r)/2;
		build(l, mid, 2*i);
		build(mid, r, 2*i+1);
		tree[i] = min(tree[i*2], tree[i*2+1]);
	}
}

int query(int a, int b, int l, int r, int i){
	if(a == l && b == r){
		return tree[i];
	}
	int mid = (l + r)/2;
	if(b <= mid){
		return query(a, b, l, mid, i*2);
	}
	if(a >= mid){
		return query(a, b, mid, r, i*2+1);
	}
	return min(query(a, mid, l, mid, i*2), query(mid, b, mid, r, i*2+1));
}

void test_case(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];	
	}
	build(0, n, 1);
	set<int> s = {0};
	int best = 0;	
	cout << (set<int>(a, a+n).size() == n);
	for(int i = 1; i <= n && s.size(); i++){
		best = i - 1;
		set<int> tmp;
		for(int j : s){
			if(query(j, j+n-i+1, 0, n, 1) != i){
				continue;
			}
			best = i;
			if(a[j] == i){
				tmp.insert(j+1);
			}
			if(a[j+n-i] == i){
				tmp.insert(j);
			}
		}
		s.swap(tmp);
	}
	for(int i = n-1; i; i--){
		cout << (best >= i);
	}
	cout << "\n";
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

