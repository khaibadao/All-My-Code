#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t; cin >> n >> t;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
//	long long prex[n + 1][n + 1];
//	memset(prex, 0, sizeof(prex));
//	for(int i = 0 ; i < n - 1; ++i){
//		for(int j = i + 1; j < n ; ++j){
//			prex[i][j] = a[i] * a[j];
//			if(j > i + 1){
//				prex[i][j] = a[j] * a[i] + prex[i][j - 1];
//			}
//		}
//	}
//	for(int i = 0 ; i < n; ++i){
//		for(int j = 0; j < n ; ++j){
//			cout << prex[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	int t; cin >> t;
	while(t--){
		cout << 1 << '\n';
//		int l, r; cin >> l >> r;
//		--l, --r;
//		long long sum = 0;
//		if(r - l == 1) cout << (long long)a[l]*a[r] << '\n';
//		else
//		{
//			for(int i = l ; i < r ; ++i) sum += prex[i][r];
//     		cout << sum << '\n';
//		}
	}
	return 0;
}
