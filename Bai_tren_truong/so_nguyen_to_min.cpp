#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void sang(){
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int n; cin >> n;
	int a[n + 1];
	int ans = 1e9;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		if(prime[a[i]]) ans = min(ans, a[i]);
	}
	cout << ans;
	return 0;
}
