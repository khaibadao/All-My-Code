#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("average.inp", "r", stdin);
//	freopen("average.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, x, y; cin >> n >> x >> y;
	long long t = x/__gcd(x, y) * y;
    cout << n/t;
	return 0;
}
