#include<bits/stdc++.h>
using namespace std;
void ham(long long n){
	long long ans = 1;
	for(int i = 2 ; i <= sqrt(n); ++i){
		long long cnt = 1;
		int mu = 1;
		if(n%i == 0){
			while(n%i == 0){
				cnt += pow(i, mu);
				n /= i;
				++mu;
			}
			ans *= cnt;
		}
	}
	if(n != 1) ans *= (n + 1);
	cout << ans << ' ';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
	   long long n; cin >> n;
	   ham(n);	
	}
	return 0;
}
