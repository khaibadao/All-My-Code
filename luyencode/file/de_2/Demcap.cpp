#include<bits/stdc++.h>
using namespace std;
void tach(long long n){
	long long res = 1;
	long c1 = sqrt(n);
	int check = 0;
	if(c1 * c1 == n) check = 1;
	for(long i = 2 ; i <= sqrt(n); ++i){
		int cnt = 0;
		while(n%i == 0){
			++cnt;
			n /= i;
//			cout << n << ' ';
		}
		res *= (cnt + 1);
	}
	if(n != 1) res *= 2;
	if(check) cout << res/2;
	else cout << res/2 - 1;
}
int main()
{
	freopen("Demcap.inp", "r", stdin);
	freopen("Demcap.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	tach(n);
	return 0;
}
