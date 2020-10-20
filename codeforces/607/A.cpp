/**
*  author: rits1272
*  created: Oct 20, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = 1e6 + 6;
int n;
vector<int> dp(mxN), b(mxN);

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0, a; i < n; i++){
	cin >> a;
	cin >> b[a];
    }
    if(b[0] > 0)
	dp[0] = 1;
    int safe = 0;
    for(int i = 1; i < mxN; i++){
	if(b[i] == 0)
	    dp[i] = dp[i-1];
	else if(i > b[i])
	    dp[i] = dp[i - b[i] - 1] + 1;
	else
	    dp[i] = 1;
	safe = max(safe, dp[i]);
    }
    cout << n - safe << '\n';
    return 0;
}
