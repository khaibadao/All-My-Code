#include<bits/stdc++.h>
#define Mod 1000000007
#define ModF 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

long long lt(long a, long b, long mod){
	long long res = 1;
	while(b){
		if(b%2 == 1){
			(res *= a) %= mod;
		}
		b /= 2;
		(a *= a) %= mod;
	}
	return res;
}

int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long a, b, c; cin >> a >> b >> c;
		long long mu = lt(b, c, ModF);
		long long res = lt(a, mu, Mod);
		cout << res << en;
	} 
	return 0;
}
