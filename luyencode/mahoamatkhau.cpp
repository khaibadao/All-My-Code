#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int sum = 0;
	string c = "";
	for(char x : s){
		if('0' <= x && x <= '9'){
			sum += x - 48;
		//	s.erase(x);
		}else
		{
			c += x;
		}
	}
	cout << c << sum;
	return 0;
}
