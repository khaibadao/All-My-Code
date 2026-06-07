#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("countpairs.inp", "r", stdin);
	freopen("countpairs.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int k;
    	cin >> k;
    	long ans = 0;
    	if(k <= 2) cout << 0 << '\n';
    	else{
    		while(k - 2 >= 1){
    			ans += k - 2;
    			k -= 2;
			}
			cout << ans << '\n';
		}
	}
    return 0;
}

