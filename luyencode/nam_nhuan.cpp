#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin >> a;
	if(a <= 0 || a > 100000){
		cout << "INVALID";
		return 0;
	}
	if(((a%4 == 0 && a%100 != 0) || a%400 == 0) && (a > 0 && a <= 100000)) cout << "YES";
	else{
		cout << "NO";
	}
	return 0;
}
