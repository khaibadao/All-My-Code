#include <iostream>
#include <vector>
using namespace std;

int res = 0, n, S;
vector<int> a(n);

void ql(long long sum, int i) {
    if (sum == S) {
        ++res;
        return;
    }
    if (i >= n) {
        return;
    }
    if (sum < S) {
        ql(sum + a[i], i + 1);
    }
    ql(sum, i + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> S;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    ql(0, 0);
    cout << res << endl;
    
    return 0;
}

