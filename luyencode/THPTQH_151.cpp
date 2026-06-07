#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int main(){
	
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, so_luong_pt; cin >> n >> so_luong_pt;
	long vi_tri; cin >> vi_tri;
	vector <int> a(n);
	long long sum = 0;
	for(int i = 0 ; i < n  ;++i){
		cin >> a[i];
		sum += a[i];
	}
	int cnt = so_luong_pt/n;
	int so_luot = so_luong_pt%n;
	sum *= cnt; // cnt o day la so luong vong da chay, ket thuc o so du
	long i = vi_tri%n - 1; // vi tri hien tai  
//	cout << sum << ' ' << i << ' ';
	while(so_luot--){
		if(i == n) i = 0;
		sum += a[i];
//		cout << a[i] << ' ';
		++i;
	}
	cout << sum;
	return 0;
}
