#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        char a[n + 1][n + 1];
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){
                cin >> a[i][j];
            }
        }
        int res = n/k;
        char f[res][res];
        for(int i = 0 ; i < res ; ++i){
            for(int j = 0 ; j < res; ++j){
                int x = i * k;
                int y = j * k;
                f[i][j] = a[x][y];
            }a
        }
        for(int i = 0 ; i < res ; ++i){
            for(int j = 0 ; j < res; ++j){
                int x = i * k;
                int y = j * k;
                cout << f[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
