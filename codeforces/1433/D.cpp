/**
*  author: rits1272
*  created: Oct 20, 2020
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
    int tt; cin >> tt;
    while(tt--){
	int n; cin >> n;
	int a[n];
	set<int> s;
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	    s.insert(a[i]);
	}
	if(s.size() == 1){
	    cout << "NO\n";
	    continue;
	}
	else{
	    cout << "YES\n";
	    int second;
	    for(int i = 0; i < n; i++){
		if(a[i] != a[0]){
		    second = i + 1;
		    break;
		}
	    }
	    for(int i = 1; i < n; i++){
		if(a[i] == a[0])
		    cout << second << " " << i + 1 << '\n';
		else
		    cout << 1 << " " << i + 1 << "\n";
	    }
	}
    }
    return 0;
}
