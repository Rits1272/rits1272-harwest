/**
*  author: rits1272
*  created: Oct 13, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int ask(int x, int y){
    cout << "? " << x+1 << " " << y+1 << endl;
    int val; cin >> val;
    return val;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> ans(n, -1);
    int mx = 0;
    for(int i = 1; i < n; i++){
	int a = ask(i, mx);
	int b = ask(mx, i);
	if(a > b){
	    ans[i] = a;
	}
	else{
	    ans[mx] = b;
	    mx = i;
	}
    }
    ans[mx] = n;
    cout << "! ";
    for(int i = 0; i < n; i++)
	cout << ans[i] << " ";
    cout << endl;
    return 0;
}
