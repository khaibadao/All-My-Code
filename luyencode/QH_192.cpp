
#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;
int main()
{
    freopen("BOI30.INP", "r", stdin);
	freopen("BOI30.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	long long sum = 0;
	sort(s.begin(), s.end(), greater <char> ());
	for(char x : s) sum += x - '0';
	(sum%3 == 0) ? cout << s : cout << -1;
	return 0;
}
