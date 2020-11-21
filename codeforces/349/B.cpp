#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define pb push_back
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define INF 1e18 + 5
#define MOD 1e9 + 7

int v;

bool comp(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first == b.first){
      return a.second > b.second;
    }
    return a.first < b.first;
}

void solve(){
    cin >> v;
    vector<pair<int, char>> p;
    int paint[10];
    for(int i = 1; i <= 9; ++i){
      cin >> paint[i];
      char d = i + '0';
      p.pb({paint[i], d});
    }
    sort(p.begin(), p.end(), comp); 
    int x = p[0].first;
    string ans = "";
    for(int i = 0; i < v/x; i++){
      ans += p[0].second;
    }
    if(ans == ""){
      cout << -1 << '\n';
      return;
    }
    int left = v - x*ans.size();
    for(int i = 0; i < (int)ans.size(); i++){
      for(int d = 9; d >= 1; d--){
//        print(paint[d]+x) println(left)
        if(paint[d] <= left + x){
//          println(d)
          char digit = d + '0';
          ans[i] = digit;
          left = left + x - paint[d];
          break;
        }
      }
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans << '\n';
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt = 1;
//  cin >> tt;
	while(tt--){
		solve();
		cout << '\n';
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n'; 
}

