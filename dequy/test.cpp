#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int n, S;
vector<long long> dem;
vector<long long> a;
long long res = LLONG_MAX;  // Ð?t res thành giá tr? l?n nh?t có th? d? tìm giá tr? nh? nh?t.

void ql(long long sum, int check) {
    if(sum > S) {
        res = min(res, sum);
        return;
    }
    if(sum > S || check >= n) return;
    for(int i = check; i < n; ++i) {
        if(!dem[a[i]]) {
            ++dem[a[i]];
            ql(sum + a[i], i + 1);
            --dem[a[i]];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> S;
    a.resize(n);
    dem.resize(1000000, 0);  // Ð?m b?o kích thu?c phù h?p d? tránh truy c?p ngoài ph?m vi.
    for(int i = 0; i < n; ++i) cin >> a[i];
    ql(0, 0);
    if (res == LLONG_MAX) cout << -1;  // N?u không có k?t qu?, tr? v? -1.
    else cout << res;
    return 0;
}

