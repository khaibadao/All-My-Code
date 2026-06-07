#include<bits/stdc++.h>
using namespace std;
long long prime[1000001];
void nt()
{
	for(int i = 0 ; i <= 1000000 ; i++)
	   prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
long long doi_xung(long long n){
	string s = to_string(n);
	int l = 0, r = s.size() - 1;
	while(l < r){
		if(s[l] != s[r])
    		return 0;
		l++;
		r--;
	}
	return 1;
}
long long d[1000001];
void so(){
	nt();
	for(int i = 10 ; i <= 1000000 ; i++){
		if(prime[i] && doi_xung(i)){
			d[i] = i;
		}
	}
}
int main(){
	so();
	long long  n; cin >> n;
	int dem = 0;
	for(int i = 0 ; i <= n ; i++){
		if(d[i] <= n){
			dem++;
		}
	}
	cout << dem;
	return 0;
}
