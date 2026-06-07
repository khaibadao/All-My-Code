#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	long a[n + 1] = {0};
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	long long pre[n + 1] = {0};
	for(int i = 1 ; i <= n ; ++i) pre[i] = pre[i - 1] + a[i];
	long long ans = 0;
	for(int i = k ; i <= n ; ++i){
		ans = max(ans, pre[i] - pre[i - k]);
	}
	cout << ans;
	return 0;
}
