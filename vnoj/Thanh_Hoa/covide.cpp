#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, n; cin >> n >> a >> b;
	if(a <= b){
		cout << 0 << ' ';
	}else cout << a - b << ' ';
	if(a + b > n) cout << n - b;
	else cout << a;
	return 0;
}
