#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("power.INP", "r", stdin);
	freopen("power.OUT", "w", stdout);
	long long n; cin >> n;
	bool check = true;
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			long long x = pow(i, i);
			long long y = pow(n/i, n/i);
//			cout << i << ' ';
			if(x % n == 0){ 
				check = false;
				cout << i;
				break;
			}
//			cout << n/i << '\n';
			else if(y % n == 0){
//				long long y = pow(n/i, n/i);
				check = false;
				cout << n/i;
				break;
			}
		}
	}
	if(check) cout << n;
	return 0;
}
