#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m; cin >> n >> m;
	int hang; cin >> hang;
	hang -= 1;
	int a[n][m];
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin >> a[i][j];
		}
	}
	sort(a[hang], a[hang] + m);
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
