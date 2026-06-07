#include<bits/stdc++.h>
using namespace std;
double can(int n){
	if(n == 1) return sqrt(2);
	return sqrt(2 + can(n - 1));
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
    	cout << fixed << setprecision(5) << can(n) << '\n';
	}
	return 0;
}
