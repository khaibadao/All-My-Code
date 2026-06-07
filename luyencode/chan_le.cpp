#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("Parity.inp", "r", stdin);
	freopen("Parity.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long long n; cin >> n;
    	int ans = 0;
    	while(n > 0){
    		if(n%2 != 0) ++ans;
    		n /= 2;
		}
		if(ans%2 == 0) cout << "even" << '\n';
		else cout << "odd" << '\n';
	}
    return 0;
}

