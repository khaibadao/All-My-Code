#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n; cin >> n;
	int dem = 0;
	for(int i = 1 ; i <= sqrt(n); ++i) if(n%i == 0) dem += 2;
	int gia_tri = sqrt(n);
	if(gia_tri*gia_tri == n) dem--;
	cout << dem;
	return 0;
}
