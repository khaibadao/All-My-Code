#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("CAU2.INP", "r", stdin);
	freopen("CAU2.OUT", "w", stdout);
	int n; cin >> n;
	int a[n + 1];
	int dem[n + 1] = {0};
	map <int, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++dem[a[i]];
	}
	cout << *max_element(dem, dem + n);
	return 0;
}
