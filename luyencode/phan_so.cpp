#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b; cin >> a >> b;
	if(b == 0) cout << "INVALID";
	else if(b == 1) cout << a;
	else
	{
		int dau = 1;
		dau *= a/abs(a);
		dau *= b/abs(b);
		a = abs(a);
		b = abs(b);
		long res = __gcd(a, b);
		while(a%res == 0 && b%res == 0 && res != 1){
			a /= res;
			b /= res;
			res = __gcd(a, b);
		}
		if(b == 1) cout << a*dau;
		else cout << a*dau << ' ' << b;
	}
	return 0;
}
