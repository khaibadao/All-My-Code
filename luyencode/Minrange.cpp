#include<bits/stdc++.h>
using namespace std;

long check(long a, long b){
	return a < b;
}
int main(){
	freopen("minrange.inp", "r", stdin);
	freopen("minrange.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int k; cin >> k;
	vector <long> a(n);
	queue <long> qe;
	multiset <long> mst;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 0 ; i < k ; ++i){
		mst.insert(a[i]);
	}
	cout << *mst.begin() << '\n';
	for(int i = k ; i <= n - 1 ; ++i){
		mst.erase(mst.find(a[i - k]));
		mst.insert(a[i]);
		cout << *mst.begin() << '\n';
	}
	return 0;
}
