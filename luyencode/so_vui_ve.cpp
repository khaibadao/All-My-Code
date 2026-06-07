#include<bits/stdc++.h>
#define Siz(x) x.size()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b; cin >> a >> b;
	int c1 = sqrt(a), c2 = sqrt(b);
	if(c1*c1 != a) ++c1;
	int ans = 0;
	for(int i = c1 ; i <= c2 ; ++i) ++ans;
	cout << ans;
	return 0;
}
