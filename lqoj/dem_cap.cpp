#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x; cin >> n >> x;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
//	sort(a, a + n);
    int cap = 0;
	for(int i = 0; i < n ; ++i){
		long long k = x - a[i];
		if(k != a[i]){
	     	cap += mp[k];	
		}else cap += mp[k] - 1;
		--mp[a[i]];
	}
	cout << cap;
	return 0;
}
