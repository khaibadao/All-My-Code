#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

long long LCM(long long a, long long b){
	return (long long)(a*b)/__gcd(a, b);
}
int main() {
	freopen("lcm.inp", "r", stdin);
	freopen("lcm.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    if(n < 3) cout << n;
    else
    {
		long long res = 0;
		res = max(res, LCM(n, LCM(n - 1, n - 2)));
		res = max(res, LCM(n - 1, LCM(n - 2, n - 3)));
		res = max(res, LCM(n, LCM(n - 2, n - 3)));
		res = max(res, LCM(n, LCM(n - 1, n - 3)));
		cout << res;	
	}
    return 0;
}

