#include<bits/stdc++.h>
#define Siz(s) s.size()
//#define inf 10000
using namespace std;

int main()
{
	freopen("LUCKY.INP", "r", stdin);
	freopen("LUCKY.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	string xau = "";
	int cnt = 0;
	for(char x : s){
		if(x == '5' || x == '9') ++cnt;
	}
	(cnt == 5 || cnt == 9) ? cout << "YES" : cout << "NO";
	return 0;
}
