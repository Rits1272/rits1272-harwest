/*
 * author : rits1272
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define print(x) cerr << "[" << #x << ": " << x << "]";
#define println(x) cerr << "[" << #x << ": " << x << "]\n";
#define show(v) for(int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
#define deb(v) for(int i = 0; i < (int)v.size(); i++) {print(i) println(v[i])}
#define pb push_back
#define INF 1e18 + 5
const int MOD = 1e9 + 7;

int addMod(int a, int b){
	return (a + b) % MOD;
}

int mulMod(int a, int b){
	return (a * b) % MOD;
}

int32_t main() {
	string s;
	int n;
    cin>>s;  n = s.length();
    if(n == 1) {
        cout<<0<<endl;
        return 0;
    }
    if(n == 2) {
        cout<<(s[0] - '0') + (s[1] - '0')<<endl;
        return 0;
    }
	vector<int> pref(n), suff(n), prefSum(n), suffSum(n), tens(n), sumTens(n);
    tens[0] = 1, sumTens[0] = 0;
    for(int i=1; i<n; i++) {
        tens[i] = mulMod(tens[i - 1], 10);
        sumTens[i] = addMod(sumTens[i - 1], tens[i]);
    }

    pref[0] = (s[0] - '0'), suff[n - 1] = (s[n - 1] - '0');
    prefSum[0] = pref[0], suffSum[n - 1] = suff[n - 1];

    for(int i=1; i<n; i++) {
        pref[i] = addMod(mulMod(pref[i - 1], 10), (s[i] - '0'));
        prefSum[i] = addMod(prefSum[i - 1], pref[i]);
    }

    int p = 10;
    for(int i=n-2; i>=0; i--) {
        suff[i] = addMod(mulMod((s[i] - '0'), p), suff[i + 1]);
        suffSum[i] = addMod(suffSum[i + 1], suff[i]);
        p = mulMod(p, 10);
    }    

    int ans = 0;
    ans = addMod(ans, suffSum[1]);        // 1st digit
    ans = addMod(ans, prefSum[n - 2]);     // last digit

    for(int i=1; i<n-1; i++) {
        int temp = mulMod(pref[i - 1], sumTens[n - i - 1]);
        temp = addMod(temp, suffSum[i + 1]);
        ans = addMod(ans, temp);
    }

    cout<<ans<<endl;
    return 0;
}
