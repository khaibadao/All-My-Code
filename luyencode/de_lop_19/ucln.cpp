#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("ucln.inp", "r", stdin);
	freopen("ucln.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	long ans = 0;
	for(int i = 0 ; i < n  ; ++i) cin >> a[i];
	for(int i = 0 ; i < n - 1 ; ++i){
		ans = max(ans, __gcd(a[i], a[i + 1]));
	}
	cout << ans;
	return 0;
}
