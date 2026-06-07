#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;

int main(){
//	freopen("muave.inp", "r", stdin);
//	freopen("muave.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, m; cin >> n >> k >> m;
	vector <int> a(n);
	vector <char> b(n);
	queue <int> qe;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	if(m <= n){
		for(int i = 0 ; i < m ; ++i) cout << 1 << ' ';
		for(int i = m ; i < n ; ++i) cout << 0 << ' ';
		return 0;
	}else
	{
		for(int i = 0 ; i <  n; ++i){
			if(a[i] <= k) b[i] = '1';
			else
			{
				b[i] = '#';
				qe.push(i);
			}
		}
		m -= n;
		vector <int> dem(n, 1);
		while(m-- && !qe.empty()){
			int tmp = qe.front();
			qe.pop();
			++dem[tmp];
			qe.push(tmp);
		}
		for(int i = 0 ; i < n ; ++i){
			if(b[i] == '#') cout << dem[i] << ' ';
			else cout << b[i] << ' ';
		}
	}
	return 0;
}
