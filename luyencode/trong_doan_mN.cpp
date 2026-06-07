#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n, m; cin >> n >> m;
	string ans = "";
	for(long i = n ; i <= m; ++i){
		string t = to_string(i);
		ans += t;
	}
	int res = 0;
	for(char x : ans) if(x == '5') ++res;
	cout << res;
	return 0;
}
