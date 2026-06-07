#include<bits/stdc++.h>
using namespace std;
char check(long long a, long long b){
	if(a > b) return 'A';
	return 'B';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long x1, v1, x2, v2, k;
	cin >> x1 >> v1 >> x2 >> v2 >> k;
	long long res = abs((long long)(x1 - x2) + k*(v1 - v2));
	cout << res;
	return 0;
}
