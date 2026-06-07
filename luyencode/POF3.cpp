#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;
int main()
{
//	freopen("LONGK.inp", "r", stdin);
//	freopen("LONGK.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long double n; cin >> n;
	if(n == 0){
		cout << "NO";
		return 0;
	}
//	long long ans = n;
	int res = 0;
	while(n%3 == 0){
		++res;
		n /= 3;
	}
	cout << (n == 1 ? to_string(res) : "NO");
	return 0;
}
