#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	freopen("CAU5.INP", "r", stdin);
//	freopen("CAU5.OUT", "w", stdout);
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a, a + n);
//	a^2 + b^2 < c^2 --> Tam giac nhon
//	a^2 + b^2 = c^2 --> Tam giac vuong
//	a^2 + b^2 > c^2 --> Tam giac tu
    int nhon = 0, vuong = 0, tu = 0;
    for(int i = 0 ; i < n ; ++i){
//	longint Knhon = 0, Ktu = 0, Kvuong = 0;g
    	for(int j = i + 1 ; j < n ; ++j){
    		long long ans = sqrt((long long)pow(a[i], 2) + (long long)pow(a[j], 2));
    		// anc == c
    		auto it = lower_bound(a, a + n, ans);
    		int chi_so_t = it - a;
    		for(int t = chi_so_t ; t < n ; ++t) 
		    	if(a[t] == ans) ++vuong;
				else break;
			nhon = abs(0 - vuong) + 1;
			tu = n - (vuong + nhon);
		}
	}
	cout << nhon << ' ' << vuong << ' ' << tu;
	return 0;
}
