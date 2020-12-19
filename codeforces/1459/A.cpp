/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

int n;
string a;
string b;

void test_case(){
	cin >> n >> a >> b;
	int red = 0, blue = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > b[i]){
			red++;
		}
		else if(b[i] > a[i]){
			blue++;
		}
	}
	if(red > blue){
		cout << "RED\n";
	}
	else if(blue > red){
		cout << "BLUE\n";
	}
	else{
		cout << "EQUAL\n";
	}
	return;
}

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	int tt; cin >> tt;
	while(tt--){
		test_case();
	}
	return 0; 
}

/*
 * Only write code when you are sure of the approach.
 * Do optimized thinking (Think which technique/observation can be used).
 * Do post analysis after the contest.
 * Upsolve the problems.
 * Learn a technique and solve some problems if its new to you.
 * DON'T GET STUCK ON ONE APPROACH
 */ 

