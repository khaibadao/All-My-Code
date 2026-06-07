#include<bits/stdc++.h>
using namespace std;
double res;
double can(double n){
	if(n == 1) return 1;
	else return res = sqrt(can(n - 1));
}

//4

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		double n; cin >> n;
		double z = can(n);
		cout << fixed << setprecision(5) << z << '\n';
	}
	return 0;
}
