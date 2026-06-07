#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cin.tie(0);
	
	long long n, m, k; cin >> n >> m >> k;
	if(m == 1) {
		long long l, r; cin >> l >> r;
		if(l == r) {
			cout << n/2;
			return 0;
		}
		if(r < l) {
			long long temp = l;
			l = r;
			r = temp;
		}
		long long small = r - l - 1;
		long long big = n - small - 2;
		if(big < small) {
			long long temp = small;
			small = big;
			big = temp;
		}
		long long ans;
		if(big >= small*2) {
			long long after_gap = (big-small*2);
			ans = min(ans, small*2+after_gap/2+(after_gap%2));
		}
		else {
			ans = big;
		}
		cout << ans;
	}
	else
		cout << n/2;
    return 0;
}