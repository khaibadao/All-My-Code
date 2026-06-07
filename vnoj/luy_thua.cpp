#include<bits/stdc++.h>
using namespace std;
long long luy_thua(long so, long long so_mu){
	if(so_mu == 0 || so == 0) return 1;
	else{
		long long cnt = luy_thua(so, so_mu/2)%1000000000;
		if(so_mu%2 == 0) return cnt%1000000007 * cnt%1000000007;
		else return so%1000000007 * cnt%1000000007 * cnt%1000000007;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long x; cin >> x;
		long long mu; cin >> mu;
		long long so = luy_thua(x, mu);
//		cout << (long long)mu + x << '\n';
		cout << so << '\n';
	}
	return 0;
}
