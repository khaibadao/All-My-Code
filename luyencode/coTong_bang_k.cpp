#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int k; cin >> k;
	int dp[n + 5][k], a;
	dp[0][0] = 0;
	for(int i = 1 ; i < k ; ++i) dp[0][i] = -1003;
	for(int i = 1 ; i <= n ; ++i){
//		a[i] %= k;
        cin >> a;
        a %= k;
		for(int j = 0 ; j < k; ++j){
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - a)%k] + 1);
		}
	}
	cout << dp[n][0];
	return 0;
}
