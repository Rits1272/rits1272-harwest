/**
*  author: rits1272
*  created: Oct 17, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
	int n; cin >> n;
	string s; cin >> s;
	int c = 0, ac = 0;
	for(char ch: s){
	    if(ch == '>')
		c++;
	    else if(ch == '<')
		ac++;
	}
	if(c == 0 || ac == 0){
	    cout << n << '\n';
	    continue;
	}
	
	int ans = 0;
	for(int i = 0; i< n; i++){
	    int p = i - 1;
	    if(p < 0)
		p = n - 1;
	    if(s[i] == '-')
		ans++;
	    else if(s[i] == '>' && s[p] == '-'){
		ans++;
	    }
	    else if(s[i] == '<' && s[p] == '-')
		ans++;
	}
	cout << ans << '\n';
    }
    return 0;
}
