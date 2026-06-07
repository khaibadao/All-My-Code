#include<bits/stdc++.h>
using namespace std;
//long long Chap(int k, int n){
//	if(n == k || k == 0) return 1;
//	return Chap(k - 1, n) + Chap(k - 1, n - 1);
//}


int main()
{
	freopen("CHIAHET.INP", "r", stdin);
	freopen("CHIAHET.OUT", "w", stdout);
	ios_base::sync_with_stdsio(false);
	cin.tie(NULL);
	long l, r, k;
	cin >> l >> r >> k;
	while(l%k != 0) ++l;
	int ans = 0;
	while(l <= r){
		l += k;
		++ans;
	}
	cout << ans;
//	}
//	cin.tie(NULL);
}
