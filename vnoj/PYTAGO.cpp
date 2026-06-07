#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	int dem[n] = {0};
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		dem[a[i]] = 0;
	}
	int cnt = 0;
	sort(a, a + n);
//	for(int i = 0 ; i < n ; ++i) cout << dem[a[i]] << ' ';
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			for(int z = 0 ; z < n ; ++z){
				if(a[i]*a[i] + a[j]*a[j] == a[z]*a[z] && z != i && i != j && j != z || a[i]*a[i] + a[z]*a[z] == a[j]*a[j] || a[j]*a[j] + a[z]*a[z] == a[i]*a[i]) ++cnt;
			}
		}
	}
	cout << cnt;
	return 0;
}
