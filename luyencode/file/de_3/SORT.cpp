#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("SORT.INP", "r", stdin);
	freopen("SORT.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m, t; cin >> n >> m >> t;
	int so = 1;
	long long res = 0;
	long long ans = m;
	while(so < t){
		ans += m;
		if(ans > n){
			++res;
			ans = res;
		}
//		if(res == n) break;
//		else cout << ans << ' ';
		++so;
	}
	cout << ans;
	return 0;
}
