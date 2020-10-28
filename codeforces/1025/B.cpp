/**
*  author: rits1272
*  created: Oct 28, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = 2e5;
int a[mxN], b[mxN], n;

void check(int x){
    for(int i = 1; i < n; i++){
	if(a[i]%x != 0 && b[i]%x != 0)
	    return;
    }
    cout << x << '\n';
    exit(0);
}

void factor(int x){
    for(int i = 2; i*i <= x; i++){
	if(x%i == 0){
	    //println(i)
	    check(i);
	    while(x%i == 0)
		x/=i;
	}	
    }
    if(x>1)
	check(x);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
	cin >> a[i] >> b[i];
    factor(a[0]);
    factor(b[0]);
    cout << -1 << '\n';
    return 0;
}
