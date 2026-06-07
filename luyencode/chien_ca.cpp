#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
	long long res = a/b;
	if(a == 1) cout << 2;
	else if(b == 1) cout << a*2;
	else cout << 2*res;
	return 0;
}
