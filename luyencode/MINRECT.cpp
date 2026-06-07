#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int cd = abs(x1 - x2), cr = abs(y2 - y1);
	cout << cd * cr;
	return 0;
}
