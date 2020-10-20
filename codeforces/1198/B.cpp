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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    int q; cin >> q;
    vector<int> type(q), pos(q), val(q);
    for(int i = 0; i < q; i++){
	cin >> type[i];
	if(type[i] == 1){
	    cin >> pos[i] >> val[i];
	    --pos[i];
	}
	else{
	    cin >> val[i];
	}
    }
    vector<int> chk(n, -1);
    int mxx = -1;
    for(int i = q - 1; i >= 0; i--){
	if(type[i] == 1 && chk[pos[i]] == -1){
	    chk[pos[i]] = max(val[i], mxx);
	}
	else if(type[i] == 2){
	    mxx = max(mxx, val[i]);
	}
    }
    for(int i = 0; i < n; i++){
	if(chk[i] == -1)
	    chk[i] = max(mxx, a[i]);
    }

    for(int x: chk)
	cout << x << " ";
    return 0;
}
