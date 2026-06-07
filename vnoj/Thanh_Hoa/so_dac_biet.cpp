#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void sang(){
	for(int i = 0 ; i <= 1000000 ; ++i){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000; ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
long long giai_thua(long long a, long long b){
	if(b == 1) return a;
	long long x = giai_thua(a, b/2);
	if(b%2 == 1) return a * x * x;
	else return x*x;
}
//void 
int main()
{
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	long long l, r;
	cin >> l >> r;
	int ans = 0;
	while(l < r){
		long long n = giai_thua(l, )
		if(prime[l] && )
		++l;
	}
	cout << ans;
	return 0;
}
