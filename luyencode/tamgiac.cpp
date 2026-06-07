#include<bits/stdc++.h>

//char a[105][105];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c; cin >> a >> b >> c;
	if(a + b <= c) cout << c - a - b + 1;
	else if(a + c <= b) cout << b - a - c + 1;
	else if(b + c <= a) cout << a - b - c + 1;
	else cout << 0;
	return 0;
}
