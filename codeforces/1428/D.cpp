/**
*  author: rits1272
*  created: Oct 18, 2020
**/
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ":" << x << "] "; 
#define println(x) cout << "[" << #x << ":" << x << "]\n";

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
	cin >> a[i];
    vector<int> ones, others;
    vector<pair<int, int>> ans;
    vector<int> h(n);
    int cur = n;
    for(int i = n - 1; i >= 0; i--){
	int pair = -1;
	if(a[i] == 2){
	    if(ones.empty()){
		cout << -1 << '\n';
		exit(0);
	    }
	    pair = ones.back();
	    ones.pop_back();
	}
	else if(a[i] == 3){
	    if(!others.empty()){
		pair = others.back();
		others.pop_back();
	    }
	    else{
		if(ones.empty()){
		    cout << -1 << "\n";
		    exit(0);
		}
		pair = ones.back();
		ones.pop_back();
	    }
	}
	if(a[i] == 1)
	    ones.push_back(i);
	if(a[i] >= 2)
	    others.push_back(i);
	if(a[i] == 1){
	    h[i] = cur--;
	    ans.push_back({h[i], i + 1});
	}
	else if(a[i] == 2){
	    h[i] = h[pair];
	    ans.push_back({h[i], i +1});
	}
	else if(a[i] == 3){
	    h[i] = cur--;
	    ans.push_back({h[i], pair + 1});
	    ans.push_back({h[i], i + 1});
	}
    }
    cout << ans.size() << "\n";
    for(pair<int, int> p: ans){
	cout << p.first << " " << p.second << "\n";
    }
    return 0;
}
