#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
	    long long sum = 0;
		long a[n + 1];
		for(int i = 1 ; i <= n ; ++i){
			cin >> a[i];
			sum += a[i];
		}
		cout << round((double)sum/n) << '\n';
	}
	return 0;
}
