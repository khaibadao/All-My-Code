#include<bits/stdc++.h>
using namespace std;
void ham_xu_ly(string s){
	// 12345 + -4324324
    string a = "", b = "";
    int so_1 = 0, so_2 = 0;
    a += s[0];
    for(int i = 1 ; i < s.size() ; ++i){
    	if(s[i] == ' ') s[i] = '#';
	}
	for(int i = 0 ; i < s.size() ; ++i) if(s[i] != '#') cout << s[i]; else cout << endl;
}
int main()
{
	string s;
	getline(cin, s);
	ham_xu_ly(s);
	return 0;
}
