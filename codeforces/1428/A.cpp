/**
*  author: rits1272
*  created: Oct 17, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

void master(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = abs(x1-x2) + abs(y1-y2);
    if(x1 == x2 || y1 == y2)
	cout << ans << '\n';
    else
	cout << ans+2 << '\n';
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
