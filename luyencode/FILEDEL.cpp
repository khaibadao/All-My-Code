#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
bitset<MAXN> mark[26]; // mark[c] = bitset các từ có ký tự c

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        vector<bool> seen(26, false);
        for (char c : s)
            seen[c - 'a'] = true;
        for (int j = 0; j < 26; ++j)
            if (seen[j]) mark[j].set(i);
    }

    bitset<MAXN> removed; // các từ đã “loại bỏ”
    while (t--) {
        char c; cin >> c;
        removed |= mark[c - 'a']; // union nhanh
        cout << n - (int)removed.count() << '\n';
    }
}
