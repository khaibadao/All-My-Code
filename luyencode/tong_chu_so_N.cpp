#include<bits/stdc++.h>
#define Mod 10000000
using namespace std;
int main()
{
	freopen("digits.inp", "r", stdin);
	freopen("digits.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
//	sang();
	while(t--){
		string s; cin >> s;
		long long sum = 0;
		for(char x : s) sum += x - '0';
		while(sum >= 10){
			string so = to_string(sum);
			sum = 0;
			for(char x : so) sum += x - '0';
		}
		cout << sum << '\n';
	}
	return 0;
}
