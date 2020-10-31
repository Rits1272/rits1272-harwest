/**
*  author: rits1272
*  created: Oct 31, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

void NO(){
    cout << "Just a legend\n";
    exit(0);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    int n = s.size();
    vector<int> pi(n);
    for(int i = 1; i < n; ++i){
	int j = pi[i-1];
	while(j > 0 && s[i] != s[j])
	    j = pi[j-1];
	if(s[i] == s[j])
	    j++;
	pi[i] = j;
    }
    if(pi[n-1] == 0 || n <= 2){
	NO();
    }
    for(int i = 0; i+1 < n; i++){
	if(pi[i] == pi[n-1]){
	    cout << s.substr(0, pi[n-1]);
	    return 0;
	}
    }
    if(pi[pi[n-1]-1] == 0)
	NO();
    cout << s.substr(0, pi[pi[n-1]-1]) << '\n';
    return 0;
}
