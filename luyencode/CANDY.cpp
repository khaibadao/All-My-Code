#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
//	freopen("ucln.inp", "r", stdin);
//	freopen("ucln.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector <long> a(n + 1), l(n + 1), r(n + 2);
	l[0] = r[n + 1] = 0;
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	for(int i = 1 ; i <= n ; ++i) l[i] = l[i - 1] + a[i];
	for(int i = n ; i >= 1 ; i--) r[i] = r[i + 1] + a[i];
	long long res = LLONG_MAX;
	for(int i = 1 ; i <= n ; ++i){
		long long tmp = abs(l[i] - r[i + 1]);
		res = min(res, tmp);
	}
	cout << res;
	return 0;
}

