#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int n = s.size();
	s = 'x' + s;
	bool f[n + 1][n + 1];
	for(int i = 1 ; i <= n ; i++){
		f[i][i] = true;
	}
    int ans = 1;
    for(int len = 2 ; len <= n ; len++){
    	for(int i = 1 ; i <= n - len + 1; i++){
    		int j = i + len - 1;
    			if(len == 2 && s[i] == s[j]){
    				f[i][j] = true;
				}else
				{
				f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);
	    	}
	    	if(f[i][j]){
	    		ans = max(ans, len);
			}
		}
	}
	cout << ans;
	return 0;
}
