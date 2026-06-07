
#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;
int main()
{
    freopen("maxgif.inp", "r", stdin);
	freopen("maxgif.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <int> a(n);
	long long res = 0;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 1 ; i < n ; ++i){
        res = max(res, (long long)a[i] + a[i - 1]);
	}
	cout << res;
	return 0;
}
