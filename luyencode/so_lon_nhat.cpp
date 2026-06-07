#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	long ans = -1e9;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		ans = max(ans, a[i]);
	}
	cout << ans;
	return 0;
}
