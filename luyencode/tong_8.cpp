#include<bits/stdc++.h>
using namespace std;
double can(int res, int n){
	if(res == n) return sqrt(res);
	return sqrt(res + can(res + 1, n));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int res = 1;
		cout << fixed << setprecision(5) << can(res, n) << '\n';
	}
	return 0;
}
