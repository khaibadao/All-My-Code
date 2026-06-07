#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("query.inp", "r", stdin);
//	freopen("query.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, p;
    cin >> n >> k >> p;
    vector <int> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    while(p--){
    	char x; cin >> x;
    	if(x == '!'){
    		int tmp = a[0];
    		a[0] = a[n - 1];
    		for(int i = 1 ; i < n ; ++i){
    			int res = a[i];
    			a[i] = tmp;
    			tmp = res;
			}
		}
		else
		{
			int tmp = k;
			int ans = 0;
			int res = 0;
			ans = max(ans, res);
			res = 0;
			int i = 0;
			while(i + k - 1 < n){
				for(int t = i ; t <= i + k - 1 ; ++t){
					if(a[t] == 1) ++res;
				}
				ans = max(ans, res);
	    		res = 0;
				++i;
//				cout << i << ' '; 
			}
			ans = max(ans, res);
			cout << ans << '\n';
		}
	}
    return 0;
}

