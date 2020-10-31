/**
*  author: rits1272
*  created: Oct 31, 2020
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
    int a[n], b[n];
    for(int i = 0; i < n; i++){
	cin >> a[i];
	b[i] = ~a[i];
    }
    int pref[n], suff[n];
    pref[0] = b[0];
    suff[n-1] = b[n-1];
    for(int i = 1; i < n; i++)
	pref[i] = pref[i-1]&b[i];
    for(int i = n-2; i >= 0; i--)
	suff[i] = suff[i+1]&b[i];
    int idx = 0, mx = -1;
    for(int i = 0; i < n; i++){
	int val;
	if(i == 0)
	    val = a[i]&suff[1];
	else if(i == n-1)
	    val = a[i]&pref[n-2];
	else
	    val = a[i]&pref[i-1]&suff[i+1];
	//println(val)
	if(val > mx){
	    mx = val;
	    idx = i;
	}
    }
    //cerr << idx << '\n';
    swap(a[0], a[idx]);
    for(int i = 0; i < n; i++)
	cout << a[i] << " ";
    cout << '\n';
    return 0;
}
