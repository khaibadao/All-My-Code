#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("thuong.inp", "r", stdin);
	freopen("thuong.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <long> a(n), b(m);
    unordered_map <long, long> ma;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	++ma[a[i]];
	}
	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
		ma[b[i]] = 0;
	}
	long long res = LLONG_MIN;
	bool check = false;
	for(int i = 0 ; i < n ; ++i){
		if(ma[a[i]]){
			check = true;
			res = max(res, (long long)ma[a[i]] * a[i]);
			cout << a[i] << ' ';
		}
	}
	if(!check) cout << 0;
	else cout << '\n' << res;
    return 0;
}
