#include <bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int main()
{
    freopen("DELETE.inp", "r", stdin);
    freopen("DELETE.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    string ans = "0";
    string l = "", r = "";
    l += s[0];
    for(int i = 1 ; i < Siz(s) ; ++i) r += s[i];
    ans = max(ans, r);
    while(Siz(r)){
        char kt = r[0];
        r.erase(0, 1);
        string tmp = l + r;
        ans = max(ans, tmp);
        l += kt;
    }
    cout << ans;
    return 0;
}

