#include<bits/stdc++.h>
using namespace std;
int check(long a){
	map <char, int> mp;
	string s = to_string(a);
	for(int i = 0 ; i < s.size() ; ++i){
		++mp[s[i]];
		if(mp[s[i]] == 2) return 0;
	}
	return 1;
}
int main()
{
	long a; cin >> a;
//	vector <string> a(0);
	while(a%5 != 0) a--;
	int dem = 1;
	for(long i = a; i >= 5 ; i -= 5){
		if(check(i)) ++dem;
	}
	cout << dem;
	return 0;
}
