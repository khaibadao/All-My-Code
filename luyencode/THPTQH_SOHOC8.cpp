#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("lucky.inp", "r", stdin);
	freopen("lucky.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    unordered_map <long, int> ma;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i){
    	 cin >> a[i];
    	 ++ma[a[i]];
	}
    int q; cin >> q;
    while(q--){
    	long x; cin >> x;
    	cout << ma[x] << '\n';
	}
    return 0;
}
