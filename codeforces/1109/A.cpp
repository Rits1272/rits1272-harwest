/**
*  author: rits1272
*  created: Oct 24, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

int n, cur = 0;
const int nxN = 3e5+5;
int a[nxN], pref[nxN];
int cnt[2][1ll<<20];

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    /*Naive Approach (O(n^3))
     *
     * Find all subarrays of even length having xor = 0
    for(int i = 1; i < n; i += 2){
	for(int j = 0; j < n; j++){
	    int ldx = j + i;
	    int cur = 0;
	    for(int k = j; k <= ldx; k++){
		cur ^= a[k];
	    }
	    ans += (cur == 0);
	}
    }
    * 
    */
    int cur = 0, ans = 0;
    cnt[1][0]++;
    for(int i = 0; i < n; i++){
	int x; cin >> x;
	cur ^= x;
	ans += cnt[i&1][cur];
	++cnt[i&1][cur];
    }
    cout << ans << '\n';
    return 0;
}
