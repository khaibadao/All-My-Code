#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("BAI3.INP", "r", stdin);
	freopen("BAI3.OUT", "w", stdout);
	int n; cin >> n; long k; cin >> k;
	long a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	long long sum = 0;
	sort(a, a + n, greater <long> ());
	for(int i = 0 ; i < n - 1 ; ++i){
		if(a[i] - a[i + 1] >= k && a[i] > 0){
			sum += max(a[i], a[i + 1]);
			a[i] = a[i + 1] = 0;
		}else if(a[i] - a[i + 1] < k && a[i] > 0){
			sum += a[i] + a[i + 1];
			a[i] = a[i + 1] = 0;
		}
	}
	cout << sum;
	return 0;
}
