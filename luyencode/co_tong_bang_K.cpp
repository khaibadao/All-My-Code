#include<bits/stdc++.h>
#define MAX 1000001
int dp[MAX][MAX], a[MAX];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long k; cin >> k;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		a[i] = a[i] % k;
	}
	for(int i = 1 ; i < k ; ++i) dp[0][i] = -1003;
	for(int i = 1 ; i <= n ; ++i){
		a[i] %= k;
		for(int j = 0 ; j < k; ++j){
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - a[i])%k] + 1);
		}
	}
	cout << dp[n][0];
	return 0;
}
