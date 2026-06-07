#include<bits/stdc++.h>
using namespace std;
long long lcmm(long long a, long long b){
	return a/__gcd(a, b%a) * b;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long a, b; cin >> a >> b;
	long long x = __gcd(a, b);
	cout << b/__gcd(a, b);
	return 0;
}
