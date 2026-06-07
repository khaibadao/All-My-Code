#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	string xau = "";
	int ans = 0;
	for(int i = 0 ; i < Siz(s); ++i){
		if('0' <= s[i] && s[i] <= '9') xau += s[i];
		else
		{
			if(Siz(xau)){
				++ans;
				xau = "";
			}
		}
	}
	if(Siz(xau)) ++ans;
	cout << ans;
	return 0;
}
