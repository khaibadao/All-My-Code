#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("mang.inp", "r", stdin);
//	freopen("mang.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    vector <long> a(n), b(m);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    for(int i = 0 ; i < m ; ++i) cin >> b[i];
    int miA = *min_element(a.begin(), a.end());
    int maB = *max_element(b.begin(), b.end());

    int result = 0;
    if (miA < maB) {
        result = maB - miA;
    }
    cout << result;
    return 0;
}

