#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double gia_tri_1 = max(a, max(b, c));
	double gia_tri_2 = min(a, max(b, c));
	if(a != gia_tri_1 && a != gia_tri_2)
	   cout << a;
	else if(b != gia_tri_1 && b != gia_tri_2)
	   cout << b;
	else
	   cout << c;
	return 0;
}
