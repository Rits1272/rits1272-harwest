/**
*  author: rits1272
*  created: Oct 24, 2020
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
    int a, b, n; cin >> a >> b >> n;
    int highest = __gcd(a, b);
    vector<int> div;
    for(int i = 1; i*i <= highest; i++){
	if(highest%i == 0){
	    div.push_back(i);
	    if(highest/i != i){
		div.push_back(highest/i);
	    }
	}
    }
    sort(div.begin(), div.end());
    //for(int x: div)
	//cout << x << " ";
    //cout << '\n';
    for(int i = 0; i < n; i++){
	int l, r; cin >> l >> r;
	int it = upper_bound(div.begin(), div.end(), r) - div.begin();
	--it;
	//print(it)
	if(div[it] >= l && div[it] <= r)
	    cout << div[it] << '\n';
	else
	    cout << -1 << '\n';
    }
    return 0;
}
