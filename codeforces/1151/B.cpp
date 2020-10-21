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
    int n, m; cin >> n >> m;
    int a[n][m];
    int tmp[n];
    int ans = 0;
    for(int row = 0; row < n; row++){
	for(int col = 0; col < m; col++){
	    cin >> a[row][col];
	}
    }

    memset(tmp, 0, sizeof(tmp));
    for(int row = 0; row < n; row++){
	//print(a[row][0]);
	ans = ans ^ a[row][0];
	//println(ans)
	for(int col = 1; col < m; col++){
	    if(a[row][col] != a[row][0]){
		tmp[row] = col + 1;
	    }
	}
    }
    if(ans != 0){
	cout << "TAK\n";
	for(int i = 0; i < n; i++){
	    cout << 1 << " ";
	}
	cout << '\n';
    }
    else{
	vector<int> v;
	bool flag = false;
	for(int i = 0; i < n; i++){
	    if(flag == 0 && tmp[i] != 0){
		v.push_back(tmp[i]);
		flag = 1;
	    }
	    else{
		v.push_back(1);
	    }
	}
	if(flag == 0)
	    cout << "NIE\n";
	else{
	    cout << "TAK\n";
	    for(int x: v)
		cout << x << " ";
	}
    }
    return 0;
}
