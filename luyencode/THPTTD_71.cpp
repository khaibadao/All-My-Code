#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
	freopen("sumn.inp", "r", stdin);
	freopen("sumn.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	long long sum = 0;
	for(char x : s) sum += x - '0';
	cout << sum;
	return 0;
}
