#include<bits/stdc++.h>
#define Siz(s) s.size()
#define MAX 100100
using namespace std;

int main(){
	freopen("cachnhiet.inp", "r", stdin);
	freopen("cachnhiet.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	long long sum = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	int l = 0, r = n - 1;
	while(l < r){
		sum += max(0, a[r] - a[l]);
		++l, --r;
	}
	cout << sum;
	return 0;
}
