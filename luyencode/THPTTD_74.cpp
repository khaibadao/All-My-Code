#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	freopen("NOINHANH.INP", "r", stdin);
	freopen("NOINHANH.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long long pre[n + 1];
	pre[0] = 0;
	vector <long> a(n + 1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	for(int i = 1 ; i <= n ; ++i){
		pre[i] = pre[i - 1] + a[i];
	}
	for(int i = 1 ; i <= n ; ++i) cout << pre[i] << ' ';
	return 0;
}
