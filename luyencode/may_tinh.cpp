#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	float a, b; char dau;
	cin >> a >> dau >> b;
	if(dau == '+') cout << fixed << setprecision(2) << a + b;
	else if(dau == '-') cout << fixed << setprecision(2) << a - b;
	else if(dau == '*') cout << fixed << setprecision(2) << a * b;
	else if(b == 0) cout << "Math Error";
	else cout << fixed << setprecision(2) << a/b;
	return 0;
}
