#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	string s = "#";
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		s += a[i] + '0';
	}
//	cout << s << '\n';
	bool f[n + 1][n + 1];
	memset(f, false, sizeof(f));
	for(int i = 1 ; i <= n ; ++i) f[i][i] = true;
	int ans = 1;
	for(int len = 2; len <= n ; ++len){
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
	cout << ans;
	return 0;
}
