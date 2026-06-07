#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; getline(cin, s);
	string xau = "";
	for(char x : s){
		if(x != ' '){
			if((65 <= x && x <= 90) || (97 <= x && x <= 122)) xau += x;
		}
	}
	cout << xau;
	return 0;
}
