/**
*  author: rits1272
*  created: Oct 28, 2020
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
    int n; cin >> n;
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
	cin >> a[i];
	sum += a[i];
    }
    if(sum%3 != 0){
	cout << 0 << '\n';
	return 0;
    }
    sum/=3;
    int ans = 0;
    vector<int> cnt(n, 0);
    int cur = 0;
    for(int i = n - 1; i >= 0; i--){
	cur += a[i];
	if(cur == sum)
	    cnt[i] = 1;
    }
    for(int i = n-2; i >= 0; i--){
	cnt[i] += cnt[i+1];
    }
    cur = 0;
    for(int i = 0; i+2 < n; i++){
	cur += a[i];
	if(cur == sum)
	    ans += cnt[i+2];
    }
    cout << ans << '\n';
    return 0;
}
