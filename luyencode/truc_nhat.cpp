#include<bits/stdc++.h>
using namespace std;
long long gcdd(long a, long b){
	return (long long)a/(__gcd(a, b)) * b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
	long long so = 0, x = 0, y = 0;
	so = gcdd(a, b);
	cout << so << '\n' << so/a << ' ' << so/b;
	return 0;
}
