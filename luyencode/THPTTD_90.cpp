#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("bai3.inp", "r", stdin);
//	freopen("bai3.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 1));
    vector<vector<int>> f(n + 1, vector<int>(m + 1, 0));
    for(int i = 0 ; i <= n ; ++i) f[i][0] = 1;
    for(int i = 0 ; i <= m ; ++i) f[0][i] = 1;
    for(int i = 1 ; i <= n ; ++i){
    	for(int j = 1 ; j <= m ; ++j){
    		cin >> a[i][j];
		}
	}
	cout << '\n';
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			if(a[i][j] == 0){
				if(a[i - 1][j] == 0 && a[i][j - 1] == 0 && i > 1 && j > 1) f[i][j] = f[i][j - 1] + f[i - 1][j];
				else if(a[i - 1][j] == 0 || a[i][j - 1] == 0) f[i][j] = max(f[i][j], max(f[i - 1][j] + 1, f[i][j - 1] + 1));
				if(a[i][j - 1] == 1 && a[i - 1][j] == 1) f[i][j] = max(f[i][j - 1], f[i - 1][j]);
			}else f[i][j] = max(f[i][j], max(f[i][j - 1], f[i - 1][j]));
		}
	}
	for(int i = 1 ; i <= n ; ++i){
    	for(int j = 1 ; j <= m ; ++j){
    		cout << f[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << f[n][m];
    return 0;
}
