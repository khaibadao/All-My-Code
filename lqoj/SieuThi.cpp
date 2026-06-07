#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;
	cin >> n >> s;
	int a[n + 1], b[s + 1];
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] >> b[i];
	}
	int dp[n + 1][s + 1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= s ; j++){
			dp[i][j] = dp[i - 1][j];
			if(j >= a[i]){
				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + b[i]);
			}
		}
	}
	if(dp[n][s] == 0){
		cout << -1;
	}else
	{
		cout << dp[n][s];
	}
	return 0;
}
