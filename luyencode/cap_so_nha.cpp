#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 2023
using namespace std;

int main()
{
//	freopen("multiple.inp", "r", stdin);
//	freopen("multiple.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b; cin >> a >> b;
	long long res = 1, sum = 1;
	for(int i = 1 ; i < a ; ++i){
		(res *= b) %= 1000000;
//		cout << res << ' ';
		(sum += res) %= 1000000000;
//		cout << sum << ' ';
	}
	cout << sum%Max_value;
	return 0;
}
