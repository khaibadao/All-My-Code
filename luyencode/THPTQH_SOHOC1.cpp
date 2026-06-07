#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("sqroot.inp", "r", stdin);
	freopen("sqroot.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n; cin >> n;
    int Mod = 2021;
    n %= Mod;
    long long ans = ((n*(n + 1)*(2*n + 1))/6)%Mod;
    cout << ans;
    return 0;
}
