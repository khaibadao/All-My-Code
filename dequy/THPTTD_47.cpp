#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int a[10] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
int cnt = 0;
int n, k;
vector<int> dem(10, 0);

void backtrack(int tong, int sl) {
    if (tong == n) {
        ++cnt;
        return;
    }
    if (tong > n || sl >= 10) {
        return;
    }
    for (int i = sl; i < 10; ++i) {
        if (dem[i] < k) {
            ++dem[i];
            backtrack(tong + a[i], i);
            --dem[i];
        }
    }
}

int main() {
	freopen("fibsum.inp", "r", stdin);
	freopen("fibsum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    backtrack(0, 0);
    cout << cnt << '\n';
    return 0;
}

