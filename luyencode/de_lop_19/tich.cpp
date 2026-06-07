#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("power.INP", "r", stdin);
//	freopen("power.OUT", "w", stdout);
	long long a, b, c;
	long long ans = 1;
	cin >> a >> b >> c;
	ans = max(ans, max((long long)a*b, max(b*c, a*c)));
	cout << ans;
	return 0;
}
