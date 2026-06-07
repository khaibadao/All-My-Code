#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(double n){
	long long res = n;
	if(n - res == 0.0) return true;
	else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    if(check((double)log(n)/log(2)) || check((double)log((double)n/3)/log(2))){
    	cout << 0;
    	return 0;
	}
    int x = 1, y = 1;
    long long res = pow(2, x);
    while(res <= n){
    	res = pow(2, ++x);
	}
	res /= 2;
	long long ress = pow(2, y);
	while(ress <= n/3){
		ress = pow(2, ++y);
	}
	(ress /= 2) *= 3;
//	cout << res << ' ' << ress;
//	cout << '\n';
	cout << min(abs(n - res), abs(n - ress));
    return 0;
}

