#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	freopen("BAI4.inp", "r", stdin);
	freopen("BAI4.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n; cin >> n;
	long long res = (n % 3) ? (n - 2) * (n - 1) / 2 - 3 * (n / 2 - 1) : (n - 2) * (n - 1) / 2 - 3 * (n / 2 - 1) + 2;
	cout << res/6 << '\n';
	return 0;
}
