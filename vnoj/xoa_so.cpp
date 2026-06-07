#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k, n; cin >> n >> k;
	if(k%2 == 0) cout << k/2;
	else if((k - 3 + 4) % 4 == 0){
//		cout << 'i'<< '\n';
		cout << (k  - 3 + 4)/4 + n/2;
	}
//	else if(n%2 == 0) cout << k + n/2 - 1;
	else{
		long long a[n + 1];
		for(int i = 1 ; i <= n ; i += 4){
			
		}
	}
	return 0;
}
