#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("MATMA.INP", "r", stdin);
//	freopen("MATMA.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	long sum = 0;
	int n = s.size();
	string xau = "";
	string ans = "";
	for(int i = n - 1; i >= 0 ; i--){
		if('0' <= s[i] && s[i] <= '9'){
			sum += s[i] - '0';
			s[i] = '#';
		}
	}
	for(int i = n - 1; i >= 0 ; i--){
		if(s[i] != ' ' && s[i] != '#'){
			xau += s[i];
		}else
		{
//			if()
			ans = ' ' + xau + ans;
			xau = "";
		}
	}
	if(xau.size()) ans = ' ' + xau + ans;
	string so = to_string(sum);
	ans = so + ans;
	cout << ans;
	return 0;
}
