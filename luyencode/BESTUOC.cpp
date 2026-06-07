#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int res = 1;
	int n; cin >> n;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 1 ; i < n ; ++i){
        res = max(res, __gcd(a[i], a[i - 1]));
	}
	cout << res;
	return 0;
}
