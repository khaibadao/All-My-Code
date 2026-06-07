#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;
bool check(int n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
void tach(int n){
	if(check(n)){
		cout << n << '\n';
//		return 0;
	}else
	{
		int nt = 0;
		for(int i = 2 ; i <= sqrt(n); ++i){
			if(n%i == 0){
				if(i != n/i){
					if(check(n/i)){
						nt = max(nt, n/i);
					}else if(check(i)) nt = max(nt, i);
				}else if(check(i)) nt = max(nt, i);
			}
		}
		cout << nt << '\n';
	}
}
int main(){
	freopen("UOCNT.INP", "r", stdin);
	freopen("UOCNT.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		tach(n);
	}
	return 0;
}
