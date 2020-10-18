/**
*  author: rits1272
*  created: Oct 18, 2020
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
	string s[n];
	for(int i = 0; i < n; i++)
	    cin >> s[i];
	char a = s[0][1];
	char b = s[1][0];
	char c = s[n-1][n-2];
	char d = s[n-2][n-1];
	//print(a) print(b) print(c) println(d)
	vector<pair<int, int>> ans;
	if(a == '0' && b == '0'){
	    if(c == '0')
		ans.push_back({n-1, n-2});
	    if(d == '0')
		ans.push_back({n-2, n-1});
	}
	else if(a == '1' && b == '1'){
	    if(c == '1')
		ans.push_back({n-1, n-2});
	    if(d == '1')
		ans.push_back({n-2, n-1});
	}
	else if(c == '0' && d == '0'){
	    if(a == '0')
		ans.push_back({0, 1});
	    if(b == '0')
		ans.push_back({1, 0});
	}
	else if(c == '1' && d == '1'){
	    if(a == '1')
		ans.push_back({0, 1});
	    if(b == '1')
		ans.push_back({1, 0});
	}
	else{
	    if(a == '1')
		ans.push_back({0, 1});
	    if(b == '1')
		ans.push_back({1, 0});
	    if(c == '0')
		ans.push_back({n-1, n-2});
	    if(d == '0')
		ans.push_back({n-2, n-1});
	}
	cout << ans.size() << "\n";
	for(pair<int, int> p: ans)
	    cout << p.first + 1 << " " << p.second + 1 << '\n';
    }
    return 0;
}
