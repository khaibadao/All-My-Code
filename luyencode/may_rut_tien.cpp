#include<bits/stdc++.h>
#define Siz(n) n.size()
#define F(i, n) for(int i = 0 ; i < n.size() ; ++i)
#define Mod 1000001
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int k; cin >> k;
	int a[n + 1];
	int count = Mod;
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	sort(a + 1, a + n + 1, greater <int> ());
	for(int i = 1 ; i <= n ; ++i){
		int res = 0;
		int sum = k;
		for(int j = i ; j <= n ; ++j){
			while(sum - a[j] >= 0){
				sum -= a[j];
				++res;
			}
			if(sum == 0){
				count = min(count, res);
				break;
//				cout << count << '\n';
//				cout << '\n';
			}else continue;
		}
	}
	if(count == Mod) cout << -1;
	else cout << count;
	return 0;
}
