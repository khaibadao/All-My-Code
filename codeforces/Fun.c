#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        long long count = 0;

        for (int a = 1; a <= x; ++a) {
            for (int b = 1; b <= x; ++b) {
                for (int c = 1; c <= x; ++c) {
                    if (a + b + c <= x && a * b + b * c + c * a <= n) {
                        ++count;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

