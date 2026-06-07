#include <bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long> a(n);
    vector<long> b(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0 ; i < m ; ++i){
        int i = 0, j = n - 1;
        while(i < j){

        }
    }
    return 0;
}
