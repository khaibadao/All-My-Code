#include<bits/stdc++.h>
using namespace std;
int C(int k, int n) {
   if (k == 0 || k == n) return 1;
   if (k == 1) return n;
   return C(k - 1, n - 1) + C(k, n - 1);
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
		else if(it.second > 2){
			int gia_tri = C(2, it.second);
			ans += gia_tri;
		}
	}
	cout << ans;
	return 0;
}
