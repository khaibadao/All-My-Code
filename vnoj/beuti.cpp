#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void nt(){
	for(int i = 1 ; i <= 1000000 ; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; i++){
		if(prime[i]){
			for(int j = i * i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	int cnt = 0;
	int n; cin >> n;
	long long gia_tri = 11;
	long long sum = 0;
	while(cnt <= n){
		long long so_fake = gia_tri;
		sum = 0;
		while(gia_tri > 0){
			int tep = gia_tri % 10;
			sum += tep * tep;
			gia_tri /= 10;
		}
		if(prime[sum]){
			cnt++;
		}
		so_fake++;
		gia_tri = so_fake;
		sum = 0;
	}
	cout << gia_tri;
	return 0;
}
