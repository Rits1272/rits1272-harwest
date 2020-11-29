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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    --r, --c;
    int ans = r+c; 
    ans = max(ans, abs(n-1-r)+abs(m-1-c));
    ans = max(ans, abs(n-1-r) + c);
    ans = max(ans, r+abs(m-1-c));
    cout << ans << '\n';
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

