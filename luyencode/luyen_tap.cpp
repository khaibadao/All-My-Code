#include <bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

unsigned long long gcd(long long a, long long b){
	return __gcd(b, a%b);
}

unsigned long long lcm(long long a, long long b){
	return (long long)a/gcd(a, b)*b;
}
signed main(){
//    freopen("addsubtract.inp", "r", stdin);
//    freopen("addsubtract.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long x, n, m; cin >> x >> n >> m;
    long long res = lcm(x, m), count = 0;
    long long ans = res / x; // buoc nhay;
    if(ans > n) cout << 0;
    else cout << n/ans;
	return 0;	 
}
