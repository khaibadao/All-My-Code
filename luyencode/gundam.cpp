#include<bits/stdc++.h>

char a[105][105];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m; cin >> n >> m;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i <= m + 1; ++i){
		a[0][i] = a[n + 1][i] = '#';
	}
	for(int i = 0 ; i <= n + 1 ; ++i){
		a[i][0] = a[i][m + 1] = '#';
	}
	int ans = 0;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			if(a[i][j] == '.'){
				if(a[i + 1][j] == '.') ++ans;
				if(a[i][j + 1] == '.') ++ans;
			}
		}
	}
	cout << ans;
	return 0;
}
