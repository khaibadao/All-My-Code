#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("str.inp", "r", stdin);
//	freopen("str.out", "w", stdout);
	string s; cin >> s;
	int dem = 0;
	for(char x : s){
		if(x > '1') ++dem;
	}
	cout << dem;
	return 0;
}
