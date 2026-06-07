#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;

int prime[10000001];
void sang()
{
	for(int i = 0 ; i <= 10000000 ; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2 ; i <= sqrt(10000000) ; ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 10000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}

bool doi_xung(long long x){
	string s = to_string(x);
	int l = 0, r = Siz(s) - 1;
	while(l < r){
		if(s[l] == s[r]){
			++l, --r;
		}else return false;
	}
	return true;
}

int main(){
//	freopen("DAYSO.INP", "r", stdin);
//	freopen("DAYSO.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	long long x, y;
	cin >> x >> y;
	long a1 = sqrt(x), a2 = sqrt(y);
	int ans = 0;
	for(long i = a1 ; i <= a2 ; ++i){
		if(prime[i] && i*i <= y && i*i >= x)
		{
			if(doi_xung(i)){
//				cout << i << " : " << i*i << '\n';
		    	++ans;
			}
		}
	}
	cout << ans;
	return 0;
}
