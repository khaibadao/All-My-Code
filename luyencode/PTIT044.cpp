#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

unsigned long long mu3(long long n){
	long long res = 1;
	long long a = 3;
	while(n){
		if(n&1){
			res *= a;
			res %= MOD;
		}
		(a *= a) %= MOD;
		n /= 2;
	}
	return res;
}

unsigned long long mu2(long long n){
	long long res = 1;
	long long a = 2;
	while(n){
		if(n&1){
			res *= a;
			res %= MOD;
		}
		(a *= a) %= MOD;
		n /= 2;
	}
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n; cin >> n;
	long long ba = (5 * mu3(n)) % MOD;
	long long hai = (6 * mu2(n)) % MOD;
//	int d = 4;
//	U(0) = -1, U(1) = 3; U(2) = 21;
//	Un + 1 = 5*U(n) - 6 * U(n - 1);
//	--> U(n) = 5*U(n - 1) - 6 * U(n - 2);
    cout << (ba - hai)%MOD;
	return 0;
}

