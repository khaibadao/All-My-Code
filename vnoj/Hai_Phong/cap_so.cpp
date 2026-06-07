#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	int cnt = 0;
	while(cnt < t){
		int check = 0, dem = 0;
		int n; cin >> n;
		long k; cin >> k;
		long a[n + 1];
		map <long, unsigned int> mp;
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
			++mp[a[i]];
		}
		for(int i = 0 ; i < n ; ++i){
			long long s = k - a[i];
			if((a[i]%2 == 0 && s%2 != 0 && mp[s]) || (a[i]%2 != 0 && s%2 == 0 && mp[s])){
				++dem;
				mp[s]--;
				mp[a[i]]--;
				check = 1;
			}
		}
		if(!check) cout << 0;
		else cout << dem;
		++cnt;
	}
	return 0;
}

