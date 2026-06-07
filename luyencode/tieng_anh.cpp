#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue <string> qe;
	string s; getline(cin, s);
	string xau = "";
	for(char x : s){
		if(('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z')) xau += x;
		else if(x == ' ' && xau.size())
		{
			qe.push(xau);
			xau = "";
		}
	}
	if(xau.size()) qe.push(xau);
	cout << qe.size();
	return 0;
}
