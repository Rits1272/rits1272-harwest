/**
*  author: rits1272
*  created: Oct 13, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

const int mxN = 2e5 + 1;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
	cin >> a[i];
    }
    vector<int> v[mxN];
    for(int i = 0; i < n; i++){
	int m = a[i], cnt = 0;
	while(m){
	    v[m].push_back(cnt++);
	    m /= 2;
	}	
    }
    int ans = 1e9;
    for(int i = 0; i <= 2e5; i++){
	if((int)v[i].size() < k)
	    continue;
	sort(v[i].begin(), v[i].end());
	int cnt = 0;
	for(int j = 0; j < k; j++){
	    cnt += v[i][j];
	}
	ans = min(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
