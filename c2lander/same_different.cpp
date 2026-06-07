#include<bits/stdc++.h>
using namespace std;

long long Chap(int n, int k){
    if(k == 0 || k == n) return 1;
    return Chap(n - 1, k - 1) + Chap(n - 1, k);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
    int n; long long res = 0;
    int k = 2;
	while(truy_van--){
        cin >> n;
		vector <int> a(n + 1);
		for(int i = 1 ; i <= n ; ++i){
			cin >> a[i];
			if(a[i] == i) ++res;
		}
//		cout << res << ' ' << k << '\n';
		long long ans = Chap(res, k);
		cout << ans << '\n';
		res = 0;
	}
	return 0;
//	cin.tie(NULL);
}
