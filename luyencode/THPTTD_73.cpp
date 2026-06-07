#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("zero.inp", "r", stdin);
//	freopen("zero.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
	}
	int ans = 0;
	for(int i = 0 ; i < n - 1 ; ++i){
		long long sum = a[i];
		if(sum == 0) ans = max(ans, 1);
		int count = 0;
		for(int j = i + 1; j < n ; ++j){
			sum += a[j];
			++count;
			if(sum == 0) ans = max(ans, count);
		}
		if(sum == 0) ans = max(ans, count);
	}
	cout << ans;
    return 0;
}

