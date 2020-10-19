/**
*  author: rits1272
*  created: Oct 19, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    stack<char> st;
    for(char c: s){
	if(st.empty())
	    st.push(c);
	else{
	    if(c == st.top())
		st.pop();
	    else
		st.push(c);
	}
    }
    cout << (st.empty() ? "Yes\n" : "No\n");
}
