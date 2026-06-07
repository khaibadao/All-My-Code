#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long k; cin >> k;
	long long a[n + 1];
	long long dem[n + 1] = {0};
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		++dem[a[i]];
	}
	sort(a, a + n);
	int ans = 0;
//	1 3 3 4 4 4 4
	for(int i = 0 ; i < n ; ++i){
		
	}
	cout << ans;
	return 0;
}
