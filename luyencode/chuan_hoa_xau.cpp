#include<bits/stdc++.h>
#define Siz(x) x.size()

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	cin.ignore();
	while(truy_van--){
		string s; getline(cin, s);
		vector <string> a(0);
		string xau = "";
		for(int i = 0 ; i < Siz(s); ++i){
			if('a' <= s[i] && s[i] <= 'z') xau += s[i];
			else
			{
				if(Siz(xau)){
					xau += ' ';
					a.push_back(xau);
					xau = "";
				}
			}
		}
		if(Siz(xau)) a.push_back(xau);
		for(string x : a) cout << x;
		cout << '\n';
	}
}
