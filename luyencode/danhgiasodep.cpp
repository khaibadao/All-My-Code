#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	int sum1 = 0, sum2 = 0;
	int ans = 0;
	while(n != 0){
		int gia_tri = n%10;
		sum1 += gia_tri;
		n /= 10;
	}
	while(sum1 > 9){
		int gia_tri = sum1%10;
		sum1 /= 10;
		sum1 += gia_tri;
	}
	cout << sum1;
	return 0;
}
