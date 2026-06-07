#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	freopen("SEQUENCE.INP", "r", stdin);
	freopen("SEQUENCE.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int k; cin >> k;
	queue <int> qe;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	long ans = LONG_MIN;
	long sum = 0;
	for(int i = 0 ; i < k ; ++i){
		qe.push(a[i]);
		sum += a[i];
	}
	ans = max(ans, sum);
	for(int i = k ; i < n ; ++i){
		sum -= qe.front();
		sum += a[i];
		qe.pop();
		qe.push(a[i]);
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}
