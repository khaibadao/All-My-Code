#include <bits/stdc++.h>
#define en '\n'
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> k >> m;
    int res = 0;
    long long f[n + 1][n + 1];
    long long pre[n + 1][n + 1];
    memset(pre, 0, sizeof(pre));
    memset(f, 0, sizeof(f));
    int ans = k;
    for(int i = 1 ; i <= n ; ++i){
    	k--;
    	for(int j = 1 ; j <= n ; ++j){
    		if(i == 1){
    			if(j <= 2){
		    		f[i][j] = i;
		    		pre[i][j] = 1;
				}else
				{
					f[i][j] = f[i][j - 1]*2;
					pre[i][j] = f[i][j];
				}
			}else
			{
				if(j <= 2){
		    		f[i][j] = i;
		    		pre[i][j] = pre[i][j - 1] + i;
				}
		    	else
		    	{
		    		f[i][j] = f[i - 1][j] + f[i][j - 1] + pre[i][j - 2];
				}
			}
		}
		if(k == 0) break;
	}
	cout << f[ans][m];
    return 0;
}

