#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Extended Euclid
ll ext_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    ll x1, y1;
    ll g = ext_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1; // dùng long long

    return g;
}

ll mod(ll a, ll m) {
    a %= m;
    if (a < 0) a += m;
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll M, xh, xt, h, t;
    cin >> M >> xh >> xt >> h >> t;

    ll a = h - 2 * t;
    ll b = xt - xh;

    a = mod(a, M);
    b = mod(b, M);

    if (a == 0) {
        if (b == 0) cout << 0;
        else cout << -1;
        return 0;
    }

    ll x, y;
    ll g = ext_gcd(a, M, x, y);

    if (b % g != 0) {
        cout << -1;
        return 0;
    }

    ll a_ = a / g;
    ll b_ = b / g;
    ll M_ = M / g;

    ll inv = mod(x, M_);
    ll k = (b_ % M_) * inv % M_;

    cout << k;
    return 0;
}