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

void master(){
    string s; cin >> s;
    int n = stol(s);
    int diff = (s[0] - '0') - 1;
    int sum = 1 + 2 + 3 + 4;
    int ans = diff * sum;
    ans += (s.size() * (s.size() + 1))/2;
    cout << ans << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
	master();
    }
    return 0;
}
