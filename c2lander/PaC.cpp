#include<bits/stdc++.h>
using namespace std;
//long long Chap(int k, int n){
//	if(n == k || k == 0) return 1;
//	return Chap(k - 1, n) + Chap(k - 1, n - 1);
//}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long a; cin >> a;
		long x1 = a/3;
		long y1 = x1;
		int check1 = 0, check2 = 0;
		while((x1 + y1*2) < a){
			++x1;
			++check1;
		}
		long y2 = a/3;
		long x2 = y2;
		while((x2 + y2*2) < a){
			++y2;
			++check2;
		}
		if(check1 <= check2) cout << x1 << ' ' << y1 << '\n';
		else cout << x2 << ' ' << y2 << '\n';
	}
//	cin.tie(NULL);
}
