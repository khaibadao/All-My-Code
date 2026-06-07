#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	map <int, int> mp;
	int cnt1, cnt2 = 0;
	int a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 0 ; i < n ; i++){
		if(mp[a[i]] > cnt2){
			cnt2 = mp[a[i]];
			cnt1 = a[i];
		}
	}
	cout << cnt1 << " " << cnt2;
	return 0;
}
