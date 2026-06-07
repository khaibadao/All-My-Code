#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void xu_ly(long long a1, long long n){
	string so = to_string(a1);
	so += so;
	long long res = stoll(so);
	while(res > n && a1 > 0){
		a1--;
		so = to_string(a1);
		so += so;
		res = stoll(so);
//		cout << so << ' ' << n;
//		break;
	}
	cout << res;
}
int main()
{
//	freopen("average.inp", "r", stdin);
//	freopen("average.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	long long a1 = sqrt(n);
	xu_ly(a1, n);
	return 0;
}
