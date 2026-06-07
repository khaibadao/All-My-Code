#include<bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'
#define Mod 1000000007

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(int i = sqrt(n) ; i <= n ; ++i){
			if(n%i == 0){
				cout << i << en;
				i = n;
			}
		}
	}
	return 0;
}
