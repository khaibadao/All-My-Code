#include<bits/stdc++.h>
#define Mod 2000001
using namespace std;

double a[Mod];
void sang()
{
	a[1] = 1.0;
	for(int i = 3 ; i < 2000000 ; i += 2){
		a[i] = 1.0/double(i) + a[i - 2];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fixed << setprecision(5) << a[2*n - 1] << '\n';
//		else cout << fixed << setprecision(5) << a[2*n - 1] << '\n';
	}
	return 0;
}
