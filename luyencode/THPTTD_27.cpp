#include <bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'
using namespace std;

int main() {
    freopen("xaucon.inp", "r", stdin);
    freopen("xaucon.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;
    
    int ans = 0, d = 0;
    map<char, int> mp;
    int i = 0, j = 0;
    while(j < Siz(s)) {
        ++mp[s[j]];
        while(mp[s[j]] > k) {
            --mp[s[i]];
            ++i;
        }
        if(j - i + 1 > ans) {
            ans = j - i + 1;
            d = i + 1;
        }
        ++j;
    }
    cout << ans << ' ' << d << en;
    return 0;
}

