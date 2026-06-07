#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 100000007
using namespace std;

int n, k;
long long a[1001 + 5][1001 + 5];
void qh(){
	a[1][0] = 1;
	a[1][1] = 1;
	for(int i = 2 ; i <= n ; ++i){
		for(int j = 0 ; j <= i ; ++j){
			if(j == i || j == 0) a[i][j] = 1;
			else (a[i][j] = a[i - 1][j - 1] + a[i - 1][j]) %= Mod;
		}
	}
}
int main()
{
//    freopen("power.INP", "r", stdin);
//	freopen("power.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> k >> n;
	qh();
	cout << a[n][k] % Mod;
	return 0;
}
