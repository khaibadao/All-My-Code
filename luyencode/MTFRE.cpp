#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	cout << mp.size() << endl;
	for(int i = 0 ; i < n ; i++){
		if(mp[a[i]] != 0){
			cout << a[i] << " " << mp[a[i]] << endl;
			mp[a[i]] = 0;
		}
	}
	return 0;
}
