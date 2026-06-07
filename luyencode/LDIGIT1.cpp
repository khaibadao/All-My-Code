#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define Mod6 100000
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

void doo(long long &n){
	while(n%10 == 0) n /= 10;
}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	long long res = 1;
	for(int i = 1 ; i <= n ; ++i){
		res *= i;
		doo(res);
		res %= Mod6;
	}
	cout << res%10;
	return 0;
}
