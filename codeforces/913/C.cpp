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

struct node{
    int cap, cost;
    bool operator < (const node &b){
	return cap*b.cost > b.cap*cost;
    }
}arr[31];

int mncost(int L, int idx){
    int bottles = L/arr[idx].cap;
    int c = bottles*arr[idx].cost;
    if(L - bottles*arr[idx].cap == 0)
	return c;
    else
	return c + min(arr[idx].cost, mncost(L - bottles*arr[idx].cap, idx + 1));
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, L; cin >> n >> L;
    arr[1].cap = 1;
    for(int i = 1; i <= n; i++){
	cin >> arr[i].cost;
	if(i > 1)
	    arr[i].cap = arr[i-1].cap*2;
    }
    sort(arr+1, arr+1+n);
    cout << mncost(L, 1) << '\n';
    return 0;
}
