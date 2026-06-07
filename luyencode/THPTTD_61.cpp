#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TIMBER.INP", "r", stdin);
	freopen("TIMBER.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	long long k = (sqrt(1 + 8 * n) - 1) / 2;
	cout << k;
	return 0;
}
