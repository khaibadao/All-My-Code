#include<bits/stdc++.h>
#define Mod 1000000007
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long t; cin >> t;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	int cnt = 0;
	int res = 0;
	int i = 0, j = 1;
	while(i < n && j < n){
		if(abs(a[i] - a[j]) <= t && i <= n - 2){
			while(abs(a[i] - a[j]) <= t && i <= n - 2){
				++res;
				i += 2;
				j = i + 1;
			}
			cnt = max(cnt, res);
		}else
		{
			++i;
			j = i + 1;
			res = 0;
		}
	}
	cout << cnt;
	return 0;
}
