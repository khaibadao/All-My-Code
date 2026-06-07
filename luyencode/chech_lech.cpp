#include<bits/stdc++.h>

//char a[105][105];
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	long ans = INT_MAX;
	for(int i = 0 ; i < n - 1 ; ++i){
		ans = min(ans, a[i + 1] - a[i]);
	}
	cout << ans;
	return 0;
}
