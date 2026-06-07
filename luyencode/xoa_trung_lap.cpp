#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <long> a(n);
		map<long, int> mp;
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
			++mp[a[i]];
		}
		for(int i = 0 ; i < n ; ++i){
			if(mp[a[i]]){
				cout << a[i] << ' ';
				mp[a[i]] = 0;
			}
		}
		cout << '\n';
	}
	return 0;
}
