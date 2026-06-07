#include<bits/stdc++.h>
#define Siz(s) s.size()

char kt(char a){
	return ++a;
}
using namespace std;

int main()
{
//	freopen("LONGK.inp", "r", stdin);
//	freopen("LONGK.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << a*c + b*d;
	return 0;
}
