#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 100000000000000000

using namespace std;

int main()
{
	freopen("numseq.inp", "r", stdin);
	freopen("numseq.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n; cin >> n;
	cout << (((n%10) + 1) * ((n%10) + 1)) % 10;
	return 0;
}
