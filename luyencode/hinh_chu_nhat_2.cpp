#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long x1, y1, x2, y2, d1, d2;
	cin >> x1 >> y1 >> x2 >> y2 >> d1 >> d2;
	if(((x1 < d1 && d1 < x2) || (x1 > d1 && d1 > x2)) && ((y1 < d2 && d2 < y2) || (y1 > d2 && d2 > y2))) cout << "YES";
	else cout << "NO";
	return 0;
}
