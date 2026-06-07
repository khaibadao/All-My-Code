#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("COPRIME.inp", "r", stdin);
//	freopen("COPRIME.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
//	if(a > b){
	if(__gcd(a, b) == 1) cout << "YES";
	else cout << "NO";
	return 0;
}
