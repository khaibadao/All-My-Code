#include<bits/stdc++.h>
#define Mod 1000001
using namespace std;
int dem[Mod];
int main(){
//	freopen("minrange.inp", "r", stdin);
//	freopen("minrange.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	long long res = INT_MIN;
	res = max(res, (a[n - 1]*a[n - 2]*a[n - 3]));
	res = max(res, a[n - 1]*a[0]*a[1]);
	cout << res;
	return 0;
}
