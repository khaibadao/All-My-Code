#include<bits/stdc++.h>
#define haha 1000001
#define Siz(s) s.size()
using namespace std;
int main()
{
//	freopen("paint.in", "r", stdin);
//	freopen("paint.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int ans = INT_MIN;
	unordered_map <long, int> maa;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++maa[a[i]];
	}
	for(int i = 0 ; i < n ; ++i){
		if(maa[a[i]] > 1){
			int tmp = 0;
			long long res = 0;
			for(int j = 0 ; j < n ; ++j){
				if(a[j] != a[i]){
					if(a[j] != res){
						ans = max(1, max(ans, tmp));
						tmp = 0;
						++tmp;
						res = a[j];
					}else ++tmp;
				}
			}
			ans = max(1, max(ans, tmp));
		}
	}
	ans = max(1, ans);
	cout << ans;
	return 0;
}
