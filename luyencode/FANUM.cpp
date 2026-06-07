#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("ntmax.inp", "r", stdin);
//	freopen("ntmax.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    unordered_map <int, int> ma;
    vector <int> a(n);
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	++ma[a[i]];
	}
	int res = 0;
	for(const auto &it : ma){
		if(it.second == 1) ++res;
	}
	cout << res;
    return 0;
}

