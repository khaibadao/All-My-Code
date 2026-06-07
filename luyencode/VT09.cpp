#include<bits/stdc++.h>
using namespace std;
long prime[1000001];
void nt(){
	for(int i = 0 ; i <= 1000000 ; i++){
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
	nt();
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	sort(a, a + n);
	for(int i = 0 ; i < n ; i++){
		if(prime[a[i]] && mp[a[i]] != 0){
			cout << a[i] << " ";
			mp[a[i]] = 0;
		}
	}
	return 0;
}
