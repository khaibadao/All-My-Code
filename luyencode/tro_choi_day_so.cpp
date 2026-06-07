#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int k; cin >> k;
	vector <int> dp(n + 1, INT_MIN);
	vector <int> a(n + 1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	dp[0] = 0;
	int ans = INT_MIN;
	for(int i = 1 ; i <= n ; ++i){
		for(int j = max(0, i - k) ; j < i ; ++j){
			if(dp[j] != INT_MIN){
				dp[i] = max(dp[i], dp[j] + a[i]);
			}
		}
	}
	for(int i = 1 ; i <= n; ++i){
		ans = max(ans, dp[i]);
	}
	cout << ans;
}


