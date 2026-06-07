#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int dem = 0;
	for(int i = 0 ; i < s.size() ; ++i) if('0' <= s[i] && s[i] <= '9') ++dem;
	cout << dem;
	return 0;
}
