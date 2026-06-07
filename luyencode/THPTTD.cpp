#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main(){
	freopen("treelamp.inp", "r", stdin);
	freopen("treelamp.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <long> a(n), v;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		auto it = lower_bound(v.begin(), v.end(), a[i]);
		if(it == v.end()) v.push_back(a[i]);
		else *it = a[i];
	}
	cout << Siz(v);
	return 0;
}
