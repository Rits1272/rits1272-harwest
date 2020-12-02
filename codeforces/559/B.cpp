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

const int N = 2e5 + 5;

int recur(char *a, char *b, int l){
	bool flag = true;
	for(int i = 0; i < l; i++){
		if(a[i] != b[i]){
			flag = false;
			break;
		}
	}
	if(flag){
		return true;
	}
	if(l&1){
		return false;
	}
	else if(recur(a, b+l/2, l/2) && recur(a+l/2, b, l/2)){
		return true;
	}
	else if(recur(a, b, l/2) && recur(a+l/2, b+l/2, l/2)){
		return true;
	}
	return false;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	char a[N], b[N];
	string s1, s2; cin >> s1 >> s2;
	for(int i = 0; i < (int)s1.size(); i++){
		a[i] = s1[i];
		b[i] = s2[i];
	}
	cout << (recur(a, b, s1.size()) ? "YES\n" : "NO\n");
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
