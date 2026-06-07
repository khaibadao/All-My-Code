#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int a[n + 1], b[m + 1];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
	}
	double ans = 1000000.0;
	int x1 = 0, x2 = 0;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			if((double)a[i]/b[j] < ans){
				x1 = a[i];
				x2 = b[j];
				ans = (double)(a[i]/b[j]);
			}
		}
	}
	cout << min(x1, x2) << max(x1, x2);
	return 0;
}
