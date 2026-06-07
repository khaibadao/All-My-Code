#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int check(string s, int k){
	int res = 0;
	for(char x : s){
		res = (res * 10 + (x - '0')) % k;
	}
	return res == 0;
}

int main()
{
	freopen("coprime.inp", "r", stdin);
	freopen("coprime.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	long res = 0;
	long ans = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 1 ; i < n ; ++i){
		if(__gcd(a[i], a[i - 1]) == 1) ++res;
		else{
			if(res) ans = max(ans, res + 1);
			res = 0;
		}
	}
	if(ans) cout << ans;
	else cout << 0;
	return 0;
}
