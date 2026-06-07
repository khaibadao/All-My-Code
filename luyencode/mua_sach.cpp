#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("books.inp", "r", stdin);
	freopen("books.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long k; cin >> k;
	vector <long> a(n);
	long ans = 0;
	long long sum = 0;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n - 1 ; ++i){
		if(a[i] <= k){
			++ans;
			sum = a[i];
			for(int j = i + 1 ; j < n ; ++j){
				sum += a[j];
				if(sum <= k) ++ans;
				else break;
			}
		}else continue;
	}
	if(a[n - 1] <= k) ++ans;
	cout << ans;
	return 0;
}
