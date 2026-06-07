#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	long long dem = 0;
	dem += n / 5;
	if(n){
		dem++;
	}
	cout << dem;
	return 0;
}
