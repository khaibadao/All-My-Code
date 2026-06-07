#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("SHIPPER.INP", "r", stdin);
//	freopen("SHIPPER.OUT", "w", stdout);
	int n; cin >> n;
	int m; cin >> m;
	map <long, int> mp;
	long a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	int ans = 0;
	for(auto it : mp){
		ans = max(ans, it.second) && it.second <= m;
	}
	cout << ans;
	return 0;
}
