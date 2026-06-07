#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}

int main() {
	freopen("nicenum.inp", "r", stdin);
	freopen("nicenum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    bool check1 = true;
    for(int i = 2 ; i <= n ; ++i){
    	if(check(i)){
    		for(int j = i + 1 ; j <= n ; ++j){
	    		if(check(j)){
	    			long long k = i*i + j*j;
	    			if(check(k) && k <= n){
	    				cout << i << ' ' << j << ' ' << k << '\n';
						check1 = false;
					}
				}
			}
		}
	}
	if(check1 == true) cout << -1;
    return 0;
}

