/**
*  author: rits1272
*  created: Oct 30, 2020
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
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
	cin >> v[i].first;
    for(int i = 0; i < n; i++)
	cin >> v[i].second;
    sort(v.begin(), v.end());
    priority_queue<int> pq;
    int cur = 0, sum = 0, ans = 0;
    for(int i = 0; i < n;){
	while(pq.size() && cur < v[i].first){
	    sum -= pq.top(); pq.pop();
	    ans += sum;
	    cur++;
	}

	if(cur < v[i].first)
	    cur = v[i].first;
	int j;
	for(j = i; j < n && v[i].first == v[j].first; j++){
	    sum += v[j].second;
	    pq.push(v[j].second);
	}
	i = j;
    }
    while(pq.size()){
	sum -= pq.top(); pq.pop();
	++cur;
	ans += sum;
    }
    cout << ans << '\n';	
    return 0;
}
