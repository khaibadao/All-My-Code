#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c; cin >> a >> b >> c;
	if(a + b > c && a + c > b && c + b > a){
		cout << a + b + c << ' ';
		double s = (a + b + c)/2;
		double S = (double)sqrt(s*(s - a) * (s - b) * (s - c));
		cout << fixed << setprecision(2) << S;
	}else cout << "NO";
	return 0;
}
