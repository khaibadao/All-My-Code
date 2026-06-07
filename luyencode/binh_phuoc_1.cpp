#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;
int dem[Mod];
int main(){
	freopen("DAYSO.INP", "r", stdin);
	freopen("DAYSO.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n; cin >> n;
	long long res = n*(n + 1)/2;
	cout << res;
	return 0;
}
