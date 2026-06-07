#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	int ans = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	for(int i = 0 ; i < n ; ++i){
		if(mp[a[i]] > 1){
			ans += mp[a[i]];
			mp[a[i]] = 0;
		}
	}
	cout << ans;
	return 0;
}
