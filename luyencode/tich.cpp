#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	long long res = max(a[0]*a[1], a[n - 1]*a[n - 2]);
	cout << res;
	return 0;
}
