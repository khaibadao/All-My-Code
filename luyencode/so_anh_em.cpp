#include<bits/stdc++.h>
using namespace std;

int prime[1000001];
void sang()
{
	for(int i = 0 ; i <= 1000000; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2 ; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	freopen("pairpbro.inp", "r", stdin);
	freopen("pairpbro.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int n, k; cin >> n >> k;
	int res = 2;
	int ans = 0;
	if(prime[res + k]) ++ans;
	++res;
	while(res + k <= n && res + k <= n){
		if(prime[res + k] && prime[res]){
			++ans;
		}
		res += 2;
	}
	cout << ans;
	return 0;
}
