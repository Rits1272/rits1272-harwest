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

int cost(char a, char b){
	if(a < b){
		swap(a, b);
	}
	return min(a-b,('z'-a)+(b-'a')+1);
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int n, p; cin >> n >> p;
	string s; cin >> s;
	--p;
	if(p >= n/2){
		reverse(s.begin(), s.end());
		p = n-p-1;
	}
	int l = -1, r = -1, ans = 0;
	
	for(int i = 0; i < p; i++){
		if(s[i] != s[n-i-1]){
			l = i;
			break;
		}
	}
	
	for(int i = n/2-1; i >= p; i--){
		if(s[i] != s[n-i-1]){
			r = i;
			break;
		}
	}
	
	//print(l) print(r)
	
	if(l == -1 && r == -1){
		cout << 0 << '\n';
		return 0;
	}
	else if(l == -1){
		// go only right
		for(int i = p; i <= r; i++){
			if(s[i] != s[n-i-1]){
				ans += cost(s[i], s[n-i-1]);
			}
		}
		ans += r-p;
	}
	else if(r == -1){
		// go only left
		for(int i = l; i < p; i++){
			if(s[i] != s[n-i-1]){
				ans += cost(s[i], s[n-i-1]);
			}
		}
		ans += p-l;
	}
	else{
		for(int i = l; i <= r; i++){
			if(s[i] != s[n-i-1]){
				ans += cost(s[i], s[n-i-1]);
				//print(s[i]) print(s[n-i-1]) println(cost(s[i], s[n-i-1]))
			}
		}
		if(p-l >= r-p){
			ans += 2*(r-p) + (p-l);
		}
		else{
			ans += 2*(p-l) + (r-p);
		}
	}
	cout << ans << "\n";
	//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
