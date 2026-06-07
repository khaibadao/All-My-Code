#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("sqroot.inp", "r", stdin);
//	freopen("sqroot.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	long long sum = 0;
	for(int i = 0 ; i <= n ; ++i){
		sum += i*i;
//		cout << i*i << ' ';
	}
	cout << sum%2021;
	return 0;
}
