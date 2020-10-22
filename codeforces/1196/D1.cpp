/**
*  author: rits1272
*  created: Oct 22, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

// k = 2; RG, GB, BR;
// k = 3; RGB, GBR, BRG;
// k = 4; RGBR, GBRG, ....

const string x = "RGB";

int diff(string &a, string &b){
    int n = a.length();
    int res = 0;
    for(int i = 0; i < n; i++){
	res += (a[i] != b[i]);
    }
    return res;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	 int n, k; cin >> n >> k;
	string s; cin >> s;
	vector<string> options;
	for(int i = 0; i < 3; i++){
	    int cnt = 0, j = i;
	    string tmp = "";
	    while(cnt < k){
		tmp += x[j++];
		if(j == 3)
		    j = 0;
		cnt++;
	    }
	    //println(tmp);
	    options.push_back(tmp);
	}

	int ans = 1e9;
	for(int i = 0; i < n-k+1; i++){
	    string sub = s.substr(i, k);
	    for(string op : options){
		ans = min(ans, diff(sub, op));
	    }
	}
	cout << ans << '\n';
    }
    return 0;
}
