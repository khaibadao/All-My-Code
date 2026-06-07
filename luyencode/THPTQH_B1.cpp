#include<bits/stdc++.h>
#define haha 1000001
#define Siz(s) s.size()
using namespace std;
int main()
{
	freopen("ucln.inp", "r", stdin);
	freopen("UCLN.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
	cout << __gcd(b, a%b);
	return 0;
}
