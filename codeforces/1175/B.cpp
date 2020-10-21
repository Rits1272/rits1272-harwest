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
    int D = pow(2, 32);
    stack<int> st;
    st.push(1);
    int x = 0;
    for(int i = 0; i < n; i++){
	string s; cin >> s;
	if(s == "for"){
	    int mul; cin >> mul;
	    st.push(min(D, st.top() * mul));
	}
	else if(s == "end"){
	    assert(!st.empty());
	    st.pop();
	}
	else
	    x += st.top();
    }
    if(x >= D)
	cout << "OVERFLOW!!!\n";
    else
	cout << x << '\n';
    return 0;
}
