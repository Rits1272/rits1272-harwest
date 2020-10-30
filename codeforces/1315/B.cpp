/**
*  author: rits1272
*  created: Oct 30, 2020
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
    int a, b, p; cin >> a >> b >> p;
    string s; cin >> s;
    int n = s.size();
    int cost[n];
    if(n == 1){
	cout << 1 << '\n';
	return;
    }
    cost[0] = (s[0] == 'A' ? a : b);
    for(int i = 1; i < (int)s.size(); i++){
	cost[i] = cost[i-1];
	if(s[i] == s[i-1] || i+1 == n)
	    continue;
	cost[i] += (s[i] == 'A' ? a : b);
    }
    int start_from_here_cost = cost[n-1];
    int start = 0;
    while(start < n){
	//println(start_from_here_cost)
	if(start_from_here_cost <= p){
	    cout << start+1 << "\n";
	    return;
	}
	char mode = s[start];
	while(mode == s[start])
	    start++;
	start_from_here_cost = cost[n-1] - cost[start-1];
    }
    cout << n << '\n';
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
