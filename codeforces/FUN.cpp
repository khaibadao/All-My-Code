#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        long long count = 0;
        for (int a = 1; a <= x; ++a){
            for (int b = 1; b <= x; ++b){
                long long max_c1 = (n - a * b) / (a + b);
                long long max_c2 = x - a - b;
                long long c = min(max_c1, max_c2);
                if (c > 0) {
                    count += c;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
