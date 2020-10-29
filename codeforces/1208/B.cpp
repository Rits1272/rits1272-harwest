/**
*  author: rits1272
*  created: Oct 29, 2020
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
    int ans = n - 1;
    unordered_map<int, int> freq;
    for(int start = 0; start < n; start++){
	bool valid = true;
	for(int i = 0; i < start; i++){
	    freq[a[i]]++;
	    if(freq[a[i]] >= 2){
		valid = false;
		break;
	    }
	}
	int suffix = n;
	for(int j = n - 1; j >= start; --j){
	    freq[a[j]]++;
	    if(freq[a[j]] == 1){
		suffix = j;
	    }
	    else{
		break;
	    }
	}
	if(valid)
	    ans = min(ans, suffix-start);
	freq.clear();
    }
    cout << ans << '\n';
    return 0;
}
