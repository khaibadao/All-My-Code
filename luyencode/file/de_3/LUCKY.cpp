#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("LUCKY.INP", "r", stdin);
	freopen("LUCKY.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long long k; cin >> k;
	long long a[n + 1];
	map <long long, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		++mp[a[i]];
	}
//	sort(a, a + n);
	long long dem = 0;
	for(int i = 0 ; i < n ; i++){
		long long x = 1*(long long)k - a[i];
		long long y = 1*(long long)-1*k - a[i];
//		cout << x << ' ' << y << '\n';
		if(mp[x] && mp[a[i]] && x != a[i]){
			dem += mp[x];
//			cout << x << ' ' << a[i] << '\n';
		} 
		if(mp[y] && mp[a[i]] && y != a[i]){
			dem += mp[y];
//			cout << y << ' ' << a[i] << '\n';
		}
		if(x == a[i] || y == a[i]) dem += mp[a[i]] - 1;
//		(y == a[i]) dem += mp[a[i]] - 1;
		--mp[a[i]];
	}
	cout << dem;
	return 0;
}
