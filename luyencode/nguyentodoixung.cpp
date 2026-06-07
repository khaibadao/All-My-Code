#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int prime[100001];
void sang()
{
	for(int i = 0 ; i <= 100000 ; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2; i <= sqrt(100000) ; ++i){
		if(prime[i]){
			for(int j = i*i ; j <= 100000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}

bool check(int n){
	string s = to_string(n);
	int l = 0, r = Siz(s) - 1;
	while(l < r){
		if(s[l] == s[r]){
			++l, --r;
		}else return false;
	}
	return true;
}
int main() {
	freopen("SumOfPrimes.inp", "r", stdin);
	freopen("SumOfPrimes.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    sang();
    while(t--){
    	int l, r; cin >> l >> r;
    	long long sum = 0;
    	for(int i = l ; i <= r ; ++i){
    		if(prime[i]){
    			if(check(i)){
    				sum += i;
				}else prime[i] = 0;
			}
		}
		cout << sum << '\n';
	}
    return 0;
}

