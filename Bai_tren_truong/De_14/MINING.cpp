#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
	freopen("MINING.INP", "r", stdin);
	freopen("MINING.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	long long S; cin >> S;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	long r = a[n - 1], l = 0;
	long long tmp = LLONG_MAX;
	long long ans = 0;
	while(l <= r){
		int mid = (l + r)/2;
		long long sum = 0;
		auto it = lower_bound(a.begin(), a.end(), mid);
		int res = distance(a.begin(), it);
		for(int i = res ; i < n ; ++i){
//			cout << a[i] << '-' << x << '=' << a[i] - x << en;
			sum += (a[i] - mid);
		}
		if(sum == S || sum > S){
			if(sum - S <= tmp){
				tmp = sum - S;
				ans = mid;
			}
			l = mid + 1;
		}else r = mid - 1;
	}
	cout << ans;
	return 0;
}

