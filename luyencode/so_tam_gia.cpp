#include<bits/stdc++.h>
#define Mod 10000000
using namespace std;
vector <long long> pre(Mod);
void sang()
{
	long long res = 0;
	for(long long i = 1 ; i <= 10 ; ++i){
		int t = i;
		res += t;
//		cout << res << ' ';
		pre[res] = 1;
	}
}
int main()
{
//	freopen("triangular.inp", "r", stdin);
//	freopen("triangular.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	sang();
	while(t--){
		int n; cin >> n;
		if(pre[n]) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}
