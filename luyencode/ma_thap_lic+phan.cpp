#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	x + y = a;
//	x - y = b;
//	- > x = a - y;
//	- >    a - y - y = b;
//	a - 2y = b --> y = (a + b)/2
//	           --> x = a - y;
	long a, b; cin >> a >> b;
	cout << (a + b)/2 << ' ' << a - (a + b)/2;
	return 0;
}
