#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int m; cin >> m;
	int du = n % m;
	if(du == 0){
		cout << '0';
	}else
	{
		cout << m - du;
	}
	return 0;
}
