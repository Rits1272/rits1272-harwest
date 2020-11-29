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


void test_case(){
    int n, k; cin >> n >> k;
    int c[n];
    for(int i = 0; i < n; i++){
		cin >> c[i];
	}
	int ans = INF;
	for(int i = 1; i <= 100; i++){
		int local = 0;
		for(int j = 0; j < n;){
			if(c[j] == i){
				++j;
			}
			else{
				j += k;
				++local;
			}
		}
		ans = min(ans, local);
	}
	cout << ans << "\n";
    return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--){
        test_case();
    }
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n'; 
}

