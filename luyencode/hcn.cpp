#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	long long S = 1;
	int dai = 0, rong = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	sort(a, a + n);
//	dai < a[i] --> dai = a[i] && mp[a[i]] > 0
//	dai > a[i] --> rong = a[i]
//	rong
	for(int i = 0 ; i < n; ++i){
		if(mp[a[i]] >= 2){
			if(a[i] >= dai){
				rong = dai;
				dai = a[i];
				mp[a[i]] -= 2;
			}
		}
//		cout << dai << "(d)" << ' ' << rong << "(r)" << '\n';
	}
	cout << rong*dai;
	return 0;
}
