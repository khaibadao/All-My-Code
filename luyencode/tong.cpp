#include<bits/stdc++.h>
#define Mod 998244353

//char a[105][105];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long a, b, c;
		cin >> a >> b >> c;
		long long a1, b1, c1;
		a1 = (a*(a + 1)/2)%Mod;
		b1 = (b*(b + 1)/2)%Mod;
		c1 = (c*(c + 1)/2)%Mod;
		cout << (a1*b1)%Mod * c1 % Mod << '\n';
	}
	return 0;
}
