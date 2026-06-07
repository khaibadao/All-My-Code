#include<bits/stdc++.h>
using namespace std;
double tong(float n){
	if(n == 2) return 0.5;
	else return 1/n + tong(n - 1);
}
int main()
{
	float n; cin  >> n;
	cout << fixed << setprecision(4) << tong(n);
	return 0;
}
