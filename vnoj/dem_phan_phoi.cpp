#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long ans = 0;
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
	}
//	sort()
	for(int i = 1 ; i <= n ; ++i){
		if(i >= 7){
			++mp[a[i - 6]%23];
		}
		ans += mp[a[i - 6]%23];
	}
	cout << ans;
	return 0;
}
