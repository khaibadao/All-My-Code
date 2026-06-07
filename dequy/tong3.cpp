#include<bits/stdc++.h>
using namespace std;
double tong(float n){
	if(n == 1) return 1;
	else return 1/(n * (n + 1)) + tong(n - 1);
}
int main()
{
	float n; cin  >> n;
	cout << fixed << setprecision(5) << tong(n) - 0.5 ;
	return 0;
}
