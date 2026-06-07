#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int n = s.size();
	s += 'r';
	bool f[n + 1][n + 1];
	memset(f, false, sizeof(f));
	for(int i = 1 ; i <= n ; ++i) f[i][i] = true;
	int ans = 0;
	for(int len = 2 ; len <= n ; ++len){
		for(int i = 1 ; i <= n - len + 1; ++i){
			int j = i + len - 1;
			if(s[i] == s[j] && len == 2) f[i][j] = true;
			else
			{
				f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);
			}
			if(f[i][j]) ans = max(ans, len);
		}
	}
//	for(int i = 1 ; i <= n ; ++i){
//		for(int j = 1 ; j <= n ; ++j){
//			cout << f[i][j] << ' ';
//		}
//		cout << endl;
//	}
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		if(f[l - 1][r - 1]) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
