#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long x; cin >> x;
	long long cnt = 0;
	while(n--){
		long  l, r; cin >> l >> r;
		cnt = max(cnt, (1 + abs(((l + r) - l)/r)));
	}
	cout << cnt;
	return 0;
}
