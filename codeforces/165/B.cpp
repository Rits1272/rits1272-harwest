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

int n, k;

bool check(int v){
  int sum = 0;
  for(int power = 0; power <= 30; power++){
    sum += v/pow(k, power);
  }
  return (sum >= n);
}

void solve(){
    cin >> n >> k;
    int low = 1, high = 1e9;
    while(low < high){
      int mid = (low + high) >> 1;
//      print(low) println(high)
      if(check(mid))
        high = mid;
      else
        low = mid+1;
//      println(mid)
    }
    cout << low;
    return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt = 1;
//	cin >> tt;
	while(tt--){
		solve();
		cout << '\n';
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n'; 
}

