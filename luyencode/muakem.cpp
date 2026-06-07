#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	int m; cin >> m;
	int res = m;
//	vector <bool> a(n + 1, true);
	unordered_map<int, vector<int>> a;
	while(res--){
		int x, y; cin >> x >> y;
		a[x].push_back(y);
	}
	int cnt = 0;
	for(int i = 1  ; i <= n - 2 ; ++i){
		for(int j = i + 1 ; j <= n - 1 ; ++j){
			for(int z = j + 1 ; z <= n ; ++z){
				if(!a[i][j] && !a[i][z]){
//					cout << a[i] << a[j] << a[z] << '\n';
					++cnt;
				}
//			cout << a[i] << a[j] << a[z] << '\n';f
			}
		}
	}
	cout << cnt;
	return 0;
}

