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
	string s; cin >> s;
	stack<char> st;
	int n = s.size();
	st.push(s[0]);
	for(int i = 1; i < n; i++){
	    if(s[i] == 'A')
		st.push(s[i]);
	    else if(s[i] == 'B'){
		if(st.size())
		    st.pop();
		else
		    st.push(s[i]);
	    }
	}
	cout << st.size() << "\n";
    }
    return 0;
}
