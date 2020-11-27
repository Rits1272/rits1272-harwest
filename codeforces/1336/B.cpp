#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define pb push_back
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define INF 9223372036854775807 
#define MOD 1e9 + 7

int ans = INF;

int calculate(int a, int b, int c){
  return (a-b)*(a-b) + (b-c)*(b-c) + (c-a)*(c-a);
}

void solve(vector<int> a, vector<int> b, vector<int> c){
  for(int x: a){
    auto y = lower_bound(b.begin(), b.end(), x);
    auto z = upper_bound(c.begin(), c.end(), x);
    if(y == b.end() || z == c.begin()){
      continue;
    }
    --z;
    ans = min(ans, calculate(x, *y, *z));
  }
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int tt; cin >> tt;
    while(tt--){
      int r, g, b; cin >> r >> g >> b;
      vector<int> nr(r), nb(b), ng(g);
      ans = INF;
      for(int i = 0; i < r; i++){
        cin >> nr[i];
      } 
      for(int i = 0; i < g; i++){
        cin >> ng[i];
      }
      for(int i = 0; i < b; i++){
        cin >> nb[i];
      }
      sort(nr.begin(), nr.end());
      sort(ng.begin(), ng.end());
      sort(nb.begin(), nb.end());

      solve(nr, ng, nb); solve(nr, nb, ng);
      solve(ng, nb, nr); solve(ng, nr, nb);
      solve(nb, ng, nr); solve(nb, nr, ng);

      cout << ans << '\n';
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n'; 
}

