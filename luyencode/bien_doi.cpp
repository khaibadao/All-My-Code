#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	cout << a[0] << ' ';
	for(int i = 1 ; i < n ; ++i){
		if(i%2 != 0){
			if(i + 1 != n){
				a[i] += abs(a[i - 1] - a[i + 1]);
			}else a[i] += a[i - 1];
		}
		cout << a[i] << ' ';
	}
	return 0;
}
