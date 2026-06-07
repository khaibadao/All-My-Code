#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	freopen("chuyendoi.inp", "r", stdin);
	freopen("chuyendoi.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	long k; cin >> n >> k;
	while(k > n) k -= n;
	vector <long> a(n);
	deque <long> dq;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		dq.push_back(a[i]);
	}
	if(k){
		int res = 0;
		while(k--){
			dq.push_back(a[res]);
			dq.pop_front();
			if(res == n - 1) res = -1;
			res++;
		}
		while(!dq.empty()){
			cout << dq.front() << ' ';
			dq.pop_front();
		}
	}
	return 0;
}
