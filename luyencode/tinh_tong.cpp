#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("TONG.INP", "r", stdin);
//	freopen("TONG.OUT", "w", stdout);
	long n; cin >> n;
	long long s = n*((n - 1)/2);
	cout << s;
	long long sum = 0;
	for(int i = 1; i , n ; ++i) sum += i;
	cout << sum;
	return 0;
}
