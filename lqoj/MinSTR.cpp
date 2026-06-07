#include <bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    string l = "", r = "";
    l += s[0];
    string kq = "";
    string ans = s;
    for(int i = 1 ; i < Siz(s) ; ++i){
        r += s[i];
    }
    ans = min(ans, r);
    for(int i = 0 ; i < Siz(s) ; ++i){
        char x = r[0];
        r.erase(0, 1);
        kq = l + r;
        l += x;
        ans = min(ans, kq);
    }
    cout << ans;
    return 0;
}
