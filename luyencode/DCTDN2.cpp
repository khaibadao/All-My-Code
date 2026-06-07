#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	vector<int> f(n, 1);
	int ans = 1;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < i ; j++){
			if(a[i] > a[j]){
				f[i] = max(f[i], f[j] + 1);
			}
		}
		ans = max(f[i], ans);
	}
	cout << ans;
	return 0;
}
