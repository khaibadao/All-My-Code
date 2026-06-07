#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, k, b; cin >> n >> k >> b;
	int fn[n + 1] = {1};
	int a[b + 1];
	for(int i = 1 ; i <= b ; ++i){
		cin >> a[i];
		fn[a[i]] = 1;
	}
	int chi_so_i = 0;
//	cout << chi_so << '\n';
//	1 1 0 0 1 0 0 0 1 1 
	int ans = 10000000;
	for(int i = 1 ; i + k <= n ; ++i){
//		cout << a[i] << ' ';
		int tit = 0, cnt = 0;
		for(int j = i ; j <= i + k; ++j){
			if(fn[j]) ++cnt;
			else ++tit;
			if(cnt + tit >= k){
//				cout << cnt << ' ' << tit << '\n';
				ans = min(ans, cnt);
				break;
			}
		}
	}
	cout << ans;
	return 0;
}
