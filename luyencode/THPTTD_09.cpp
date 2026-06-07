#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;

int main(){
//	freopen("SUMX.INP", "r", stdin);
//	freopen("SUMX.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	vector <int> a(n);
	map <int, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	int ans = 0;
	for(int i = 0 ; i < n ; ++i){
		--mp[a[i]];
		if(mp[k - a[i]]){
//			cout << a[i] << "(map:" << mp[a[i]] << ')' <<  ' ' << k - a[i] << "(map:" << mp[k - a[i]] << ')' << '\n';
			ans += mp[k - a[i]];
		}
	}
	cout << ans;
	return 0;
}
