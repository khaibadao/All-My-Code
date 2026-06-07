#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
bool check(int n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 6 ; i*i <= n ; i += 5){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
int main(){
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	sort(a.begin(), a.end());
	int count = 0;
	auto it = lower_bound(a.begin(), a.end(), k);
	int vi_tri = distance(a.begin(), it);
	while(a[vi_tri] >= k) vi_tri--;
	for(int i = 0 ; i <= vi_tri ; ++i){
		if(check(a[i])){
			++count;
		}
	}
	cout << count;
	return 0;
}
