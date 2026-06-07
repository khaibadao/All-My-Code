#include<bits/stdc++.h>
#define Mod 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector <long long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	while(m--){
		int l, r;\
		long long S;
		cin >> l >> r >> S;
		auto it = lower_bound(a.begin() + l, a.begin() + r + 1, S);
		if (it != a.begin() + r + 1 && *it >= S){
			cout << *it << en;
		}else cout << -1 << en;
	}
	return 0;
}
