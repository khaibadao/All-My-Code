#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
//    freopen("MINING.INP", "r", stdin);
//    freopen("MINING.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;
    long long S; 
    cin >> S;

    vector<long> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    sort(a.begin(), a.end());

    long x = a[n - 1];  // Giá tr? l?n nh?t trong m?ng
    long long tmp = LLONG_MAX;  // Ð? luu tr? giá tr? g?n nh?t so v?i S
    long result = -1;

    while (x > 0) {
        long long sum = 0;
        auto it = lower_bound(a.begin(), a.end(), x);  // Tìm v? trí d?u tiên >= x
        int res = distance(a.begin(), it);

        for (int i = res; i < n; ++i) {
            sum += (a[i] - x);
        }

        if (sum == S) {
            result = x;  // Tìm th?y giá tr? phù h?p
            break;
        } else if (sum > S) {
            if(sum >)
        } else {
            break;  // Khi `sum < S`, không c?n ki?m tra thêm
        }
    }

    if (result != -1)
        cout << result << en;  // In k?t qu? n?u tìm th?y
    else
        cout << "Không tìm th?y giá tr? phù h?p" << en;

    return 0;
}
