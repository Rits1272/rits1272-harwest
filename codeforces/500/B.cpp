/**
*  author: rits1272
*  created: Oct 17, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    string valid[n];
    for(int i = 0; i < n; i++)
	cin >> valid[i];

    for(int k = 0; k < n; k++){
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < n; j++){
		if(valid[i][k] == '1' && valid[k][j] == '1')
		    valid[i][j] = '1';
	    }
	}
    }

    for(int i = 0; i < n - 1; i++){
	int k = i;
	for(int j = i + 1; j < n; j++){
	    if(a[k] > a[j] && valid[i][j] == '1')
		k = j;
	}
	swap(a[k], a[i]);
    }
    for(int i = 0; i < n; i++)
	cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
