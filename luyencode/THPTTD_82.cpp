#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
    freopen("Timso.inp", "r", stdin);
	freopen("timso.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long a, n, k; cin >> a >> n >> k;
	string s = to_string(a);
	int cnt = 1;
	long long res = (long long)k%Siz(s);
	(!res) ? cout << s[Siz(s) - 1] : cout << s[res - 1];
	return 0;
}
