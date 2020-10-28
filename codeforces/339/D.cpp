/**
*  author: rits1272
*  created: Oct 28, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = (1<<17) + 1;
int arr[mxN], n;

struct Node{
    int level, value;
};

struct Node tree[4*mxN];

void build(int s, int e, int idx){
    if(s > e)
	return;
    if(s == e){
	tree[idx].level = 1;
	tree[idx].value = arr[s];
	return;
    }
    int mid = (s + e)/2;
    build(s, mid, 2*idx);
    build(mid+1, e, 2*idx+1);

    tree[idx].level = tree[2*idx].level + 1;
    if(tree[idx].level&1)
	tree[idx].value = tree[2*idx].value ^ tree[2*idx+1].value;
    else
	tree[idx].value = tree[2*idx].value | tree[2*idx+1].value;
}

void update(int pos, int val, int s, int e, int idx){
    if(s > e)
	return;
    else if(s == e){
	tree[idx].value = val;
	return;
    }
    int mid = (s + e)/2;
    if(pos >= s && pos <= mid)
	update(pos, val, s, mid, 2*idx);
    else
	update(pos, val, mid+1, e, 2*idx+1);
	
    if(tree[idx].level&1)
	tree[idx].value = tree[idx<<1].value ^ tree[(idx<<1)+1].value;
    else
	tree[idx].value = tree[idx<<1].value | tree[(idx<<1)+1].value;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for(int i = 0; i < (1 << n); i++)
	cin >> arr[i];

    build(0, (1<<n)-1, 1);
    while(m--){
	int pos, val; cin >> pos >> val;
	--pos;
	update(pos, val, 0, (1<<n)-1, 1);
	cout << tree[1].value << '\n';
    }
    return 0;
}
