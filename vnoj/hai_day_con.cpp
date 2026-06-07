#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	long a[n + 1] = {0};
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	long long so_min = 1000000, so_max = 0;
	for(int i = 0 ; i < n - k + 1; ++i){
		long long sum = 0;
		for(int j = i ; j < i + k ; ++j){
//			cout << a[j] << ' ';
			sum += a[j];
		}
//		cout << '\n';
		so_min = min(so_min, sum);
		so_max = max(so_max, sum);
		cout << so_min << ' ' << so_max << '\n';
	}
	cout << abs(so_max - so_min);
	return 0;
}
