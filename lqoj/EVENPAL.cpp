#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		bool f[n+1][n+1];
		s = 'x' + s;
		for(int i = 1 ; i <= n ; i++){
			f[i][i] = true;
		}
		int ans = 1, gia_tri = 0;
		for(int len = 2 ; len <= n ; len++){
			for(int i = 1 ; i <= n - len + 1 ; i++){
				int j = i + len - 1;
				if(len == 2 && s[i] == s[j])
				    f[i][j] = true;
				else
				{
					f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);
				}
				if(f[i][j] && ){
			    	ans = max(len, ans);
			    }
				if(ans % 2 == 0)
				   gia_tri = ans;
			}
		}
		if(gia_tri % 2 == 0)
	   	   cout << "YES" << endl;
	    else
	       cout << "NO" << endl;
	   }
	return 0;
}
