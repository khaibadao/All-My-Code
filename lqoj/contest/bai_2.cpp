#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long long a, b;
	cin >> a >> b;
//	long long so = __gcd(a, b);
	long long so1, so2;
	if(a > b){
    	so1 = a;	
    	so2 = b;
	}
	else{
		so2 = a;
		so1 = b;
	}
	long long gdc = 0;
	long long sum = 0;
//	long long so_nho = so2, so_lon = so1;
	sum += so1;
	long long hieu = 1;
	while(so2 != 0){
		if(so1 == so2) break;
	    hieu = so1 - so2;
	    so1 = max(hieu, so2);
	    so2 = min(hieu, so2);
//	    if(so2 == 0) break;
//	    cout << so1 << ' ' << so2 <<'\n';
	    sum += so1;
	}
//	cout << so1 << ' ' << so2;
	cout << sum%998244353;
	return 0;
}
