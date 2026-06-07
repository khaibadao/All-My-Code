#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void tach(long long n){
	vector <int> so_mu;
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			int res = 0;
			while(n%i == 0){
				++res;
				n /= i;
			}
			so_mu.push_back(res);
		}
	}
	if(n != 1){
		so_mu.push_back(1);
	}
	int S = 0, P = 0;
	for(long long x : so_mu){
		if(x%2 == 0) S += x;
		else P += x;
	}
	cout << S << '\n' << P;
}
int main() {
	freopen("SumExpo.inp", "r", stdin);
	freopen("SumExpo.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n ;
    tach(n);
    return 0;
}

