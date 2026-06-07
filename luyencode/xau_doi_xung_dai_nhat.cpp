#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;


int main()
{
	
	freopen("xaudx.inp", "r", stdin);
	freopen("xaudx.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	s = '3' + s;
	int n = s.size();
	bool f[n + 1][n + 1];
	int ans = 0;
	for(int len = 2 ; len <= n ; ++len){
		for(int i = 1 ; i <= n - len + 1 ; ++i){
			int j = i + len - 1;
			if(len == 2 && s[i] == s[j]) f[i][j] = 1;
			else
			{
				f[i][j] = f[i + 1][j - 1] && s[i] == s[j];
			}
			if(f[i][j]) ans = max(ans, len);
		}
	}
	cout << ans;
	return 0;
}
