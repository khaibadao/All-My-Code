#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int n = s.size();
	s += '0';
	bool l[n + 1][n + 1];
	memset(l, false, sizeof(l));
	int ans = 1;
	for(int i = 1 ; i <= n ; ++i) l[i][i] = true;
	for(int len = 2 ; len <= n ; ++len){
		for(int i = 1 ; i <= n - len + 1; ++i){
			int j = i + len - 1;
			if(len == 2 && s[i] == s[j]) l[i][j] = true;
			else
			{
				l[i][j] = l[i + 1][j - 1] && (s[i] == s[j]);
			}
		}
	}
	int t; cin >> t;
	while(t--){
		int x, y; cin >> x >> y;
		if(l[x][y]) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
