/**
*  author: rits1272
*  created: Oct 25, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

void master(){
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
	int x; cin >> x;
	a[i] = {x, i};
	b[i] = abs(x);
    }
    sort(a.begin(), a.end(), [&](const pair<int, int> &a, const pair<int, int> &b){
	return(abs(a.first) < abs(b.first));
    });
    sort(b.rbegin(), b.rend());
    vector<pair<int, int>> ans(n);
    for(int i = 0; i < n; i++){
	int idx = a[i].second;
	int val = a[i].first;
	if(i&1){
	    if(val > 0)
		ans[i] = {idx, b[i]};
	    else
		ans[i] = {idx, -b[i]};
	}
	else{
	    if(val > 0){
		ans[i] = {idx, -b[i]};
	    }
	    else{
		ans[i] = {idx, b[i]};
	    }
	}
    }
    sort(ans.begin(), ans.end());
    for(auto x: ans)
	cout << x.second << " ";
    cout << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
	master();
    return 0;
}
