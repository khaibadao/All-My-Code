#include<bits/stdc++.h>
using namespace std;
int check_2(int a){
	for(int i = 2 ; i <= sqrt(a) ; ++i) if(a%i == 0) return 0;
	return 1;
}
int main()
{
	freopen("PRIME.INP", "r", stdin);
	freopen("PRIME.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int ans = 0, res = 0;
	for(int i = 0 ; i < n ; ++i){
        int cnt = 0;
		for(int j = 2 ; j <= a[i]; ++j){
			if(a[i]%j == 0 && check_2(j)) ++cnt;
		}
//		cout << cnt << '\n';
		if(cnt > ans){
			ans = cnt; res = a[i];
		}
	}
	cout << res;
	return 0;
}
