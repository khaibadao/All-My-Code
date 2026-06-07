#include<bits/stdc++.h>
using namespace std;
int chap(int k, int n){
	if(k == 0 || k == n) return 1;
	else if(k == 1) return n;
	return chap(k - 1, n - 1) + chap(k, n - 1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n + 1];
	map <int, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	int ans = 0;
	for(auto it : mp){
		if(it.second == 2) ++ans;
		else if(it.second > 2) ans += chap(2, it.second);
	}
	cout << ans;
	return 0;
}
