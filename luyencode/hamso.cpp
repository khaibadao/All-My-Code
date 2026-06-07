#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void binary()
{
	long long k; cin >> k;
	int l = 1, r = 1000000;
	while(l <= r){
		long long m = (l + r)/2;
		long long res = m*m*m - 2*m + 5;
		if(res == k){
			cout << m << '\n';
			return;
		}else if(res > k){
			r = m - 1;
		}else if(res < k){
			l = m + 1;
		}
	}
	cout << -1 << '\n';
}
int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int q; cin >> q;
	while(q--){
		binary();
	}
	return 0;
}
