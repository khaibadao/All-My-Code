#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 1000000
using namespace std;

int main() {
//	freopen("TONGCS.INP", "r", stdin);
//	freopen("TONGCS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);s
    int n; cin >> n;
    vector <int> dem(Max_value, 0);
    vector <int> a(n);
    int res = 1;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	++dem[a[i]];
    	res = max(res, dem[a[i]]);
	}
	cout << res;
    return 0;
}

