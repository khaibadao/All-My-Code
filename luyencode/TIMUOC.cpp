#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;


int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(long i = 2 ; i <= sqrt(n) ; ++i){
			if(n%i == 0){
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}
