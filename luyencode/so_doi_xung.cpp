#include<bits/stdc++.h>
#define Siz(n) n.size()
#define F(i, n) for(int i = 0 ; i < n.size() ; ++i)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n){
		long long res = 9;
		res *= pow(10, ceil((float)n/2) - 1);
		cout << res << '\n';
	}
	return 0;
}
