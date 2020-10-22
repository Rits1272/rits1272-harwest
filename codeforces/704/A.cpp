/**
*  author: rits1272
*  created: Oct 22, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e18;

const int mxN = 1e6 + 5;
int app[mxN], m[mxN];
int read_before = 0;
int unread[mxN] = {0};
int urcnt = 0, where = 1;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for(int i = 1; i <= q; i++){
	int type; cin >> type;
	if(type == 1){
	    int x; cin >> x;
	    urcnt++;
	    unread[x]++;
	    app[i] = x;
	}
	else if(type == 2){
	    int x; cin >> x;
	    m[x] = i;
	    urcnt -= unread[x];
	    unread[x] = 0;
	}
	else{
	    int t; cin >> t;
	    while(read_before < t){
		while(app[where] == 0)
		    ++where;
		if(m[app[where]] < where){
		    urcnt--;
		    unread[app[where]]--;
		}
		where++;
		++read_before;
	    }
	}
	cout << urcnt << '\n';
    }
    return 0;
}
