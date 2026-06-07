#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("bai2.inp", "r", stdin);
//	freopen("bai2.out", "w", stdout);
	long long n, k, b; cin >> n >> k >> b;
	long long sum = 0;
	long a[n + 1];
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	if(b > n){
		while(b > n){
			b -= n;
		}
	}
	long long res = b;
	for(int i = 0 ; i < k ; ++i){
		if(res > n) res = 1;
		sum += a[res];
		++res;
	}
	cout << sum;
	return 0;
}
