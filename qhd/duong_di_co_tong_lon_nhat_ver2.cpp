#include<bits/stdc++.h>
#define HAHA 10001
using namespace std;
long long n, m, a[HAHA][HAHA], f[HAHA][HAHA];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i < m ; ++i) f[0][i] = f[n + 1][i] = 0;
	for(int j = 1 ; j <= m ; ++j){
		for(int i = 1 ; i <= n ; ++i){
			f[i][j] = max(f[i][j - 1], max(f[i + 1][j - 1], f[i - 1][j - 1])) + a[i][j];
		}
	}
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			cout << f[i][j] << ' ';
		}
		cout << '\n';
	}
//	long long ans = -1e9;
//	for(int i = 1 ; i <= n ; ++i) ans = max(ans, f[i][m]);
//	cout << ans;
	return 0;
}
