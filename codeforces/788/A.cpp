/**
*  author: rits1272
*  created: Oct 14, 2020
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
    int mx = abs(a[1] - a[0]), mn = 0;
    int ans = mx;
    for(int i = 2; i < n; i++){
	int d = abs(a[i] - a[i-1]);
	// add this
	int add_this = max(0ll, mn) + d;

	// remove this
	int remove_this = max(0ll, mx) - d;

	int nmx = max(add_this, remove_this);
	ans = max(ans, nmx);

	mx = add_this;
	mn = remove_this;
    }
    cout << ans << '\n';
    return 0;
}
