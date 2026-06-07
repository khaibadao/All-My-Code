#include<bits/stdc++.h>
char doi(char x){
	return x + 32;
}
using namespace std;
int main()
{
	string s; getline(cin, s);
	map <char, int> mp;
	for(char x : s){
		if('A' <= x && x <= 'Z'){
			char ki_tu = doi(x);
			x = ki_tu;
			++mp[x];
		}else if('a' <= x && x <= 'z'){
			++mp[x];
		}else if('0' <= x && x <= '9'){
			++mp[x];
		}
	} 
	for(auto it : mp){
		if(it.second){
			cout << it.first << ' ' << it.second << '\n';
 		}
	}
	return 0;
}
