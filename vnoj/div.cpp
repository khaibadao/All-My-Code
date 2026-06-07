#include<bits/stdc++.h>
using namespace std;
void ham(long long a, long long b){
//	if(b == 0)
	long long gia_tri = __gcd(a, b);
	while(gia_tri != 1){
		a /= gia_tri;
		b /= gia_tri;
		gia_tri = __gcd(a, b);
	}
	if(a + b == 0) cout << 0 << ' ' << 0 << '\n';
	else if(a + b < 0) cout << a*-1 << ' ' << b*-1 << '\n';
	else cout << a << ' ' << b << '\n';
}
int main()
{
	int t; cin >> t;
	while(t--){
		long long a, b; cin >> a >> b;
		ham(a, b);
	}
	return 0;
}
