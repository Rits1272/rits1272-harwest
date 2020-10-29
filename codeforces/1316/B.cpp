/**
*  author: rits1272
*  created: Oct 29, 2020
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
    int n; cin >> n;
    string s; cin >> s;
    string concat = s + s;
    string ans = s;
    int op = 1;
    for(int i = 0; i < n; i++){
	string tmp = concat.substr(i, n);
	if((i+1)%2 == 0 && n%2 == 0)
	    reverse(tmp.begin()+n-i, tmp.end());
	if((i+1)&1 && n&1)
	    reverse(tmp.begin()+n-i, tmp.end());
	if(tmp < ans){
	    ans = tmp;
	    op = i+1;
	}	
    }
    cout << ans << "\n" << op << "\n";
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--)
	master();
    return 0;
}
