#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n], dem[n] = {0};
	int hash[1] = {0};
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i]; ++dem[a[i]];
	}
	int cnt = 0;
	for(int i = 0 ; i < n ; ++i){
		if(dem[a[i]] == 2){
			dem[a[i]] = 0;
			++cnt;
		} 
		else if(dem[a[i]] > 2){
			cnt = dem[a[i]];
			dem[a[i]] = 0;
		}
		hash[0] = max(hash[0], cnt);
	}
	cout << hash[0];
	return 0;
}
