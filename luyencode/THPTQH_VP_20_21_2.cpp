#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000007
using namespace std;

int main() {
	freopen("cntnum.inp", "r", stdin);
	freopen("cntnum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b, c, d; cin >> a >> b >> c >> d;
    long long so1 = 0, so2 = 0, so_chung = 0;
    so1 = (long long)b/c - (long long)(a - 1)/c;
    so2 = (long long)b/d - (long long)(a - 1)/d;
    long long res = (long long)c/(__gcd(min(c, d), max(c, d)%min(c, d))) * d;
    so_chung = b/res - (a - 1)/res;
    cout << (b - a + 1) - (so1 + so2 - so_chung);
    return 0;
}
