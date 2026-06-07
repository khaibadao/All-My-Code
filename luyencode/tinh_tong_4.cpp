#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		double mau = 1;
		double n; cin >> n;
//		double mau = 1;
        double tong = 2.0 * n / (n + 1);
		cout << fixed << setprecision(8) << tong << '\n';
	}
	return 0;
}
