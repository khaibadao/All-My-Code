#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;

int main(){
//	freopen("danbo.inp", "r", stdin);
//	freopen("danbo.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n, k; cin >> n >> k;
	int ans = 0;
	while(n > k){
		n -= k;
		++ans;
	}
	cout << ans;
	return 0;
}
