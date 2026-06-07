#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("BAI2.inp", "r", stdin);
//	freopen("BAI2.out", "w", stdout);
	int n; cin >> n;
	string s; cin >> s;
	long long ans = 0;
	long long res = 0;
	for(char x : s){
		if(x == '1'){
			++res;
			ans += res;
		}else res = 0;
	}
	cout << ans;
	return 0;
}
