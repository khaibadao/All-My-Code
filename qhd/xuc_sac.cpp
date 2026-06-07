#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long f[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	f[0] = 1;
	for(int s = 1 ; s <= n ; ++s){
		for(int j = 1 ; j <= 6 ; ++j){
			if(j <= s){
				f[s] = (f[s] + f[s - j]) % MOD;
			}
		}
	}
	cout << (long long)f[n];
	return 0;
}
