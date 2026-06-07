#include<bits/stdc++.h>
using namespace std;
int prime[10000001];
void nt()
{
	for(int i = 0 ; i <= 1000000 ; i++){
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 1;
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
	nt();
	int t; cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		int dem = 0;
		for(int i = l; i <= r; i++){
			if(prime[i]){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
