#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		long a[n + 1];
		long long sum = 0;
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
			sum += a[i];
		}
		cout << abs(sum - n);
	}
	return 0;
}
