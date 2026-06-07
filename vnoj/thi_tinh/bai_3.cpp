#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void nt()
{
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2 ; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int dem_uoc(int n){
	int dem = 1;
	for(int i = 2 ; i <= sqrt(n); ++i){
		if(n%i == 0) dem += 2;
	}
	int bla = sqrt(n);
	if(bla * bla == n) dem--;
	return dem;
}
int main()
{
	nt();
	long long n; cin >> n;
	int a, b; cin >> a >> b;
	int dem = 0;
	for(int i = 2 ; i <= n ; ++i){
		if(prime[i] && (long long)i*i <= n && a <= dem_uoc(i) <= b) ++dem;
	}
	cout << dem;
	return 0;
}
