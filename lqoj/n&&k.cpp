#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a, b;
	cin >> a >> b;
	long long gia_tri = b;
	int cnt = 1;
	while(gia_tri <= a){
		gia_tri *= cnt;
	  	cnt++;
	}
	cout << gia_tri;
	return 0;
}
