#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("Kitu.inp", "r", stdin);
	freopen("Kitu.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int ans = 0;
	for(char x : s){
		if('0' <= x && x <= '9') ++ans;
	}
	cout << ans;
	return 0;
}
