#include<bits/stdc++.h>
#define Siz(x) x.size()
char doi(char x){
	return x + 32;
}
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	for(int i = 0 ; i < Siz(s) ; ++i){
		if(s[i] < 'a' && s[i] != ' '){
			char ki_tu = doi(s[i]);
			s[i] = ki_tu;
		}
	}
	for(char x : s) cout << x;
	return 0;
}


