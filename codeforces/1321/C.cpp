/**
*  author: rits1272
*  created: Oct 21, 2020
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
    string s; cin >> s;
    for(char c = 'z'; c >= 'a'; c--){
	while(!s.empty()){
	    bool ext = true;
	    for(int i = 0; i < (int)s.size(); i++){
		if(s[i] == c){
		    if(i && s[i-1] + 1 == c){
			ext = false;
			s.erase(s.begin() + i);
			break;
		    }
		    else if(i+1 < (int)s.size() && s[i+1] + 1 == c){
			ext = false;
			s.erase(s.begin() + i);
			break;
		    }
		}
	    }
	    if(ext)
		break;
	}
    }
    cout << n - s.size() << '\n';
    return 0;
}
