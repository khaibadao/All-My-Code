#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long long res = 0;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n - 1 ; ++i){
		long long tmp = a[i];
		for(int j = i + 1 ; j < n ; ++j){
			res += (tmp *= a[j]);
			tmp = a[i];
//			cout << res << ' ';
		}
	}
	cout << res;
	return 0;
}
