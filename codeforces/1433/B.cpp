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
	vector<int> a(n);
	int cnt = 0, fidx = -1, ldx = -1;
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	    cnt += (a[i] == 1);
	    if(a[i] == 1){
		ldx = i;
		if(fidx == -1)
		    fidx = i;
	    }
	}
	if(cnt <= 1)
	    cout << 0 << '\n';
	else{
	    cnt = 0;
	    for(int i = fidx; i <= ldx; i++){
		if(a[i] == 0)
		    cnt++;
	    }
	    cout << cnt << "\n";
	}
    }
    return 0;
}
