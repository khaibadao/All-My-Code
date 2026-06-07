#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int a[n + 1][m + 1];
	int f[101][101];
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j) cin >> a[i][j];
	}
	for(int i = 0 ; i < m ; ++i) f[0][i] = f[n + 1][i] = -100000z;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			f[i][j] = a[i][j] + max(f[i - 1][j - 1], max(f[i][j - 1], f[i + 1][j - 1]));
		}
	}
	int cnt = -100000;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1; j <= m ; ++j) cout << f[i][j] << ' ';
		cout << endl;
	}
	cout << cnt;
	return 0;
}
