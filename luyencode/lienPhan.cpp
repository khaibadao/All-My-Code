#include<bits/stdc++.h>

double LP(int n){
	if(n == 1) return 1.0/(1.0 + 1.0);
	return 1.0/(1.0 + LP(n - 1)) ; 
}
using namespace std;
int main()
{
//	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		double x = LP(n);
		cout << fixed << setprecision(5) << x << '\n';
	}
	return 0;
}
