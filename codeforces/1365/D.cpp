#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cout << "[" << #x << ": " << x << "]";
#define println(x) cout << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

const int mxN = 50;
int n, m;
string grid[mxN];
bool vis[mxN][mxN];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool valid(int x, int y){
	return (x >= 0 && y >= 0 && x < n && y < m);
}

bool check(int x, int y, bool &flag){
	if(flag)
		return flag;
	if(x == n - 1 && y == m - 1){
		flag = true;
		return flag;
	}
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(valid(nx, ny) && grid[nx][ny] != '#' && !vis[nx][ny]){
			vis[nx][ny] = true;
			check(nx, ny, flag);
		}
	}
	return flag;
}

void test_case(){
	cin >> n >> m;
	vector<pair<int, int>> bad, good;
	for(int i = 0; i < n; i++){
		cin >> grid[i];
		for(int j = 0; j < m; j++){
			if(grid[i][j] == 'B'){
				bad.pb({i, j});
			}
			else if(grid[i][j] == 'G'){
				good.pb({i, j});
			}
		}
	}	
	
	if(grid[n-1][m-1] == '#' && good.size()){
		cout << "NO\n";
		return;
	}
	
	if(good.size() == 0 && bad.size() == 0){
		cout << "YES\n";
		return;
	}
	
	if(good.size() == 0){
		cout << "YES\n";
		return;
	}
	
	for(int i = 0; i < (int)bad.size(); i++){
		int x = bad[i].first, y = bad[i].second;
		for(int j = 0; j < 4; j++){
			int nx = x + dx[j];
			int ny = y + dy[j];
			if(valid(nx, ny) && grid[nx][ny] == '.'){
				grid[nx][ny] = '#';
			}
		}
	}
	
	if(grid[n-1][m-1] == '#'){
		cout << "NO\n";
		return;
	}
	
	for(int i = 0; i < (int)good.size(); i++){
		int x = good[i].first, y = good[i].second;
		bool flag = false;
		memset(vis, false, sizeof(vis));
		if(!check(x, y, flag)){
			cout << "NO\n";
			return;
		}
	}
	
	for(int i = 0; i < (int)bad.size(); i++){
		int x = bad[i].first, y = bad[i].second;
		bool flag = false;
		memset(vis, false, sizeof(vis));
		if(check(x, y, flag)){
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";
	
	//~ for(int i = 0; i < n; i++){
		//~ for(int j = 0; j < m; j++){
			//~ cout << grid[i][j];
		//~ }
		//~ cout << "\n";
	//~ }
	
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " s" << '\n';
	return 0; 
}
