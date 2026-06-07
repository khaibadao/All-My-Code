#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b; cin >> a >> b;
	int x = a.size(), y = b.size();
	long long f[x + 1][y + 1];
	memset(f, 0, sizeof(f));
	long long ans = 0;
	for(int i = 1 ; i <= x; ++i){
		for(int j = 1 ; j <= y ; ++j){
			if(a[i - 1] == b[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
	    	else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
	    	ans = max(ans, f[i][j]);
		}
	}
	cout << ans;
	return 0;
}
