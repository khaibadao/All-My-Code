#include<bits/stdc++.h>
#define Siz(x) x.size()
using namespace std;

int prime[1000001];
void sang()
{
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i *i ; j <= 1000000 ; j += i){
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
	string s; cin >> s;
	for(int i = 0 ; i < Siz(s) ; ++i){
		if(prime[i]){
			s[i] = '*';
		}
	}
	cout << s;
	return 0;
}
