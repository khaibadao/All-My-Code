#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void nt()
{
	for(int i = 0 ; i <= 10000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 3162 ; ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 10000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	nt();
	int n, m; cin >> n >> m;
	int a[n + 1];
	int prefix[n + 1] = {0};
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	for(int i = 1 ; i <= n ; ++i) prefix[i] = prefix[i - 1] + a[i];
	while(m--){
		int l, r; cin >> l >> r;
		int sum = prefix[r] - prefix[l - 1];
		if(sum > 0) cout << prime[sum] << "\n";
		else cout << 0 << "\n";
	}
	return 0;
}
