#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(1 + a.begin(), a.end() - 1);
	for(int i = 0 ; i < n ; ++i) cout << a[i] << ' ';
	return 0;
}
