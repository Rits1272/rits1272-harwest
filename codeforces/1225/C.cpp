/**
*  author: rits1272
*  created: Oct 23, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

pair<int, int> summands(int x){
    int cnt = 0, total = 0, i = 0;
    while(x > 0){
	if(x&1){
	    cnt++;
	    total += max(1ll, i);
	}
	x/=2;
	i++;
    }
    return {cnt, total};
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, p;
    cin >> n >> p;
    //println(summands(n))
    for(int i = 1; i <= 1e5; i++){
	int m = n - i*p;
	if(m > 0){
	    pair<int, int> p = summands(m);
	    int terms = p.first;
	    int total_terms = p.second;
	    //print(m) print(i) print(terms) println(total_terms)
	    if(terms > i)
		continue;
	    else if(total_terms >= i){
		cout << i << '\n';
		return 0;
	    }
	}
    }
    cout << -1 << '\n';
    return 0;
}
