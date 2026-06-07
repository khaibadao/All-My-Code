#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("fibsum.inp", "r", stdin);
//	freopen("fibsum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long a, b; cin >> a >> b;
    while(a%2 == 0) ++a;
    while(b%2 == 0) --b;
    long t = (b - a)/2 + 1;
    long long Sn = (t * (2 * a + (t - 1) * 2)) / 2;
    cout << Sn;
    return 0;
}

