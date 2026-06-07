#include<bits/stdc++.h>
#define Mod 1000000007
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

long long lt(long a, long b){
	long long res = 1;
	while(b){
		if(b%2 == 1){
			(res *= a) %= Mod;
		}
		b /= 2;
		(a *= a) %= Mod;
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
		long a, b; cin >> a >> b;
		cout << (long)lt(a, b) << en;
	} 
	return 0;
}
