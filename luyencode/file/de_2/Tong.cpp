#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("Tong.inp", "r", stdin);
	freopen("Tong.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	vector <long long> z(0);
	z.push_back(a);
	z.push_back(b);
	z.push_back(c);
	z.push_back(d);
	long long sum = 0;
	for(int i = 0 ; i < 4 ; ++i) if(z[i]%2 == 0) sum += z[i];
	cout << sum;
	return 0;
}
