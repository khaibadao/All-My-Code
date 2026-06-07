#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("DODEP.INP", "r", stdin);
//	freopen("DODEP.OUT", "w", stdout);
	int n, m; cin >> n >> m;
	long a[n + 1];
	long long sum = 0;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		sum += a[i];
	}
	long b[n + 1]; int n1 = 0, n2 = 1;
	while(m--){
		int KT; cin >> KT;
		if(KT == 2){
			n1 = 0, n2 = 1;
			int k; cin >> k;
			for(int i = 1 ; i <= n ; ++i){
				if(i + k > n){
					a[i] = b[n2++];
				}else
				{
					b[++n1] = a[i];
//					cout << n1 << '\n';
		     		a[i] = a[i + k];
				}
				
			}
//			cout << n1 << ' ';
			for(int i = 1 ; i <= n ; ++i) cout << a[i] << ' ';
		}else
		{
			int vi_tri; long gia_tri;
			cin >> vi_tri >> gia_tri;
			sum -= a[vi_tri];
			a[vi_tri] = gia_tri;
			for(int i = 1 ; i <= n ; ++i) cout << a[i] << ' ';
			cout << endl;
			sum += gia_tri;
			cout << sum << '\n';
		}
	}
	return 0;
}
