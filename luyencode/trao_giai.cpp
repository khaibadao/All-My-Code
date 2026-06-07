#include<bits/stdc++.h>
#define Mod 1000001
using namespace std;
int dem[Mod];
int main(){
//	freopen("minrange.inp", "r", stdin);
//	freopen("minrange.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int d[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> d[i];
		++dem[d[i]];
	}
	sort(d, d + n, greater <int> ());
	int res = n/2;
	int ans = 0;
	int cnt = -1;
	while(res--){
    	ans += dem[d[++cnt]];	
	}
	cout << ans;
	return 0;
}
