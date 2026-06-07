#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int luy_thua(long a, long b){
	if(b == 0) return 1;
	long long x = luy_thua(a, b/2) % MOD;
	if(b%2 == 1) return a*x*x;
	else x*x;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long a, b; cin >> a >> b;
	long long gia_tri = luy_thua(a, b);
	cout << gia_tri;
	return 0;
}
