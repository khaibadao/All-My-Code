#include <bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector <long long> a(n + 1);
    long long ans = LLONG_MIN;
    for(int i = 1; i <= n ; ++i){
        cin >> a[i];
        ans = max(ans, a[i]);
    }
    long long F[n + 1]; F[0] = 0;
    for(int i = 1 ; i  <= n ; ++i){
        F[i] = max(a[i], F[i - 1] + a[i]);
        ans = max(ans, F[i]);
    }
    cout << ans;
    return 0;
}
