/**
*  author: rits1272
*  created: Oct 14, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t; cin >> s >> t;
    int n = s.size();
    while(s[--n] == 'z')
	s[n] = 'a';
    s[n] += 1;
    if(s < t)
	cout << s << '\n';
    else
	cout << "No such string\n";
    return 0;
}
