#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int i, n, k; string a, b;
        cin >> n >> k >> a >> b;
        array<int, 27> vA{}, vB{};
        for(auto& c: a)
            vA[c-'a']++;
        for(auto& c: b)
            vB[c-'a']++;
     
        bool bad = false;
        for(i = 0; i < 26; i++) {
            if(vA[i] < vB[i] || (vA[i] -= vB[i]) % k)
                bad = true;
            vA[i+1] += vA[i];
        }
        cout << (bad? "No" : "Yes") << '\n';
    }
    return 0;
}
