#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long long n){
	string so = to_string(n);
	for(int i = 1 ; i < Siz(so) ; ++i){
		if(so[i - 1] <= so[i]) continue;
		else return false;
	}
	return true;
}

int main(){
	freopen("bai1.inp", "r", stdin);
	freopen("bai1.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	long long sum = 0;
	for(int i = 0 ; i < n - 1 ; ++i){
		for(int j = i + 1 ; j < n ; ++j){
			sum = a[i] + a[j];
			if(check(sum)){
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
	return 0;
}
