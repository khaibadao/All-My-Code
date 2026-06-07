#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("powerofprime.inp", "r", stdin);
	freopen("powerofprime.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin >> q;
	while(q--){
		int n, k; cin >> n >> k;
		int count = 0;
		for(int i = 2 ; i <= n ; ++i){
			if(i%k == 0){
				int tmp = i;
				while(tmp%k == 0){
					tmp /= k;
					++count;
				}
			}
		}
		cout << count << '\n';
	}
    return 0;
}

