#include<bits/stdc++.h>
#define Siz(x) x.size()
using namespace std;
string check(string a, string b){
	if(Siz(a) < Siz(b)) return b;
	else if(Siz(a) > Siz(b)) return a;
	int i = 0, j = 0;
	while(i < a.size() && j < b.size()){
		if(a[i] == b[j]){
			++i, ++j;
		}else
		{
			if(a[i] > b[j]) return a;
			else return b;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	string ans = "";
	string xau = "";
	for(int i = 0 ; i < Siz(s) ; ++i){
		if('0' <= s[i] && s[i] <= '9'){
			xau += s[i];
		}else
		{
			if(Siz(xau)){
				if(Siz(ans) <= Siz(xau)) ans = check(ans, xau);
				xau = "";
			}
		}
	}
	if(Siz(xau)) ans = check(ans, xau);
	cout << ans;
	return 0;
}
