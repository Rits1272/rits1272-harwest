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

int mul(int a, int b){
    a *= b;
    return a%MOD;
    //int res = 0;
    //a %= MOD;
    //while(b){
	//if(b&1){
	    //res = (res + a)%MOD;
	//}
	//a = (2 * a) % MOD;
	//b >>= 1;
    //}
    //return res;
}

void master(){
    int n, x, pos;
    int fact[1001];
    fact[0] = 1;
    for(int i = 1; i <= 1000; i++){
	fact[i] = mul(fact[i-1], i);
    }
    cin >> n >> x >> pos;
    vector<int> a;
    for(int i = 0; i < n; i++)
	a.push_back(i+1);
    int low = 0, high = n, steps = 0;
    vector<int> cnt(2, 0);
    while(low < high){
	int mid = (low + high)/2;
	//println(mid)
	if(mid != pos){
	    if(mid > pos)
		cnt[1]++;
	    else
		cnt[0]++;
	    steps++;
	}
	if(mid <= pos){
	    low = mid + 1;
	}
	else{
	    high = mid;
	}
    }
    //print(steps) print(cnt[0]) println(cnt[1])
    int ans = 1;
    int greater_than_x = n-x;
    int smaller_than_x = x-1;
    //print(greater_than_x) println(smaller_than_x)
    for(int i = 0; i < cnt[1]; i++){
	ans = mul(ans, greater_than_x - i);
    }
    for(int i = 0; i < cnt[0]; i++){
	ans = mul(ans, smaller_than_x - i);
    }
    //ans = mul(ans, fact[cnt[0]]);
    //ans = mul(ans, fact[cnt[1]]);
    int left = n-steps-1;
    ans = mul(ans, fact[left]);
    cout << ans << '\n';
    //println(steps)	
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    while(tt--){
	master();
    }
    return 0;
}
