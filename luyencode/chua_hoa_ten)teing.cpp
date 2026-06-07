#include<bits/stdc++.h>
#define Siz(x) x.size()
char doi(char x){
	return x - 32;
}
char doi_1(char x)
{
	return x + 32;
}
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	cin.ignore();
	while(truy_van--){
		string s; getline(cin, s);
		if('a' <= s[0]){
			char x = doi(s[0]);
			s[0] = x;
		}
		for(int i = 1 ; i < Siz(s) ; ++i){
			if('a' <= s[i] && s[i - 1] == ' '){
				char ki_tu = doi(s[i]);
				s[i] = ki_tu;
			}else if('A' <= s[i] && s[i] <= 'Z' && s[i - 1] != ' '){
				char ki_tu = doi_1(s[i]);
				s[i] = ki_tu;
			}
		}
		for(char x : s) cout << x;
		cout << '\n';
	}
	return 0;
}


