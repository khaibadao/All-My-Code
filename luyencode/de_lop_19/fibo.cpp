#include<bits/stdc++.h>
using namespace std;
long long fi[93];
bool fibo(long long n){
	if(n == 1 || n == 0) return 1;
	long long fn1 = 0, fn2 = 1;
	for(int i = 3; i <= 93 ; ++i){
		long long fn = fn1 + fn2;
		if(fn == n) return true;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
int main()
{
	freopen("fibnum.INP", "r", stdin);
	freopen("fibnum.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	fibo();
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if(fibo(n)) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
