#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("tich.inp", "r", stdin);
//	freopen("tich.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <int> a(n, 0);
    int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		for(int i = l - 1 ; i <= r - 1 ; ++i){
			if(a[i] == 0) a[i] = 1;
			else a[i] = 0;
		}
	}
	for(int i = 0 ; i < n ; ++i) cout << a[i] << ' ';
    return 0;
}

