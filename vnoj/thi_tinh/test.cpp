#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m, t; cin >> n >> m >> t;
//	ham(n, m, t);
    int so = 1;
    long long ans = m;
    long long cnt = 0;
    while(so < t){
    	ans += m;
    	// cong thuc : (so_cuoi_cung) + m + 1 - (m*(m - 1)
//    	cout << ans << '\n';
    	if(ans == n){
    		cout << ans + 1 - (m*(m - 1)) << ' ';
//    		cnt = ans + 1 - (m*(m - 1));
//    		ans = cnt;
		}else if(ans > n){
			cout << ans + m + 1 - (m*(m - 1)) << ' ';
		}
//		cout << cnt << ' ';
		++so;
	}
//	cout << cnt;
	return 0;
}
