/**
*  author: rits1272
*  created: Oct 30, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string ans = s;
    for(int i = k; i < n; i++)
	ans[i] = ans[i-k];
    if(ans >= s){
	cout << n << '\n' << ans << '\n';
	return 0;
    }
    for(int i = k-1; i >= 0; i--){
	if(s[i] != '9'){
	    for(int j = i; j < n; j+=k)
		ans[j]++;
	    break;
	}
	else{
	    for(int j = i; j < n; j += k){
		ans[j] = '0';
	    }
	}
    }
    cout << n << "\n" << ans << '\n';
    return 0;
}
