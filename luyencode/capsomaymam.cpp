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
	vector<int> a(n);
	for(int i = 0; i < n; ++i) cin >> a[i];
	int cnt = 0;
	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			long long res = a[i] * a[j];
			bool found = false;
			for(int z = 1; z <= 20; ++z){
				long long x = 1, y = 1;
				for(int k = 0; k < z; ++k) x *= a[i];
				for(int k = 0; k < z; ++k) y *= a[j];
				if((x + y) % res == 0){
//					cout << a[i] << ' ' << a[j] << '\n';
					++cnt;
					found = true;
					break;
				}
				// Ki?m tra n?u giá tr? x ho?c y dã quá l?n, tránh l?p l?i vô ích
				if (x > LLONG_MAX / a[i] || y > LLONG_MAX / a[j]) break;
			}
		}
	}
	cout << cnt;
	return 0;
}

