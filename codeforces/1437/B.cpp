/**
*  author: rits1272
*  created: Oct 27, 2020
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
    string s1 = "", s2 = "";
    for(int i = 0; i < n; i++){
	if(i&1){
	    s1 += '0';
	    s2 += '1';
	}
	else{
	    s1 += '1';
	    s2 += '0';
	}
    }
    int ans = INF;
    for(string type : {s1, s2}){
	int cnt = 0;
	for(int i = 0; i < n; i++){
	    if(s[i] != type[i]){
		while(s[i] != type[i]){
		    i++;
		}
		cnt++;
		i--;
	    }
	}
	ans = min(ans, cnt);
    }
    cout << ans << '\n';
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
