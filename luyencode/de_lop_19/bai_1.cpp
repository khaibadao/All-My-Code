#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("BAI1.inp", "r", stdin);
//	freopen("BAI1.out", "w", stdout);
	long a, a_p, h;
	const double pi = 3.14159265358979323846;
	cin >> a >> a_p >> h;
	double goc = a_p*pi/180.0;
	cout << fixed << setprecision(3) << h + a*tan(goc);
	return 0;
}
