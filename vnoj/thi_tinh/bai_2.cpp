#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	double x1, x2, v1, v2;
	cin >> x1 >> x2 >> v1 >> v2;
	if(v1 - v2 == 0 || v2 - v1 == 0){
		cout << -1; 
		return 0;
	}else
	{
		cout << fixed << setprecision(4) << (x1 - x2)/(v2 - v1);
	}
	return 0;
}
