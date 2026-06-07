#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 10000000
using namespace std;
vector <int> pre(Mod);
int main()
{
	freopen("ARRSUM.INP", "r", stdin);
	freopen("ARRSUM.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n; cin >> n;
	long long res = 0;
	for(long long i = 1 ; i <= n ; ++i){
		res += i*(i + 1)/2;
		res %= Mod;
	}
	cout << res%Mod;
	return 0;
}
