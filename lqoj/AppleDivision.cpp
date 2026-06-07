#include<bits/stdc++.h>
#define Mod 1000000007
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

long long mi = LONG_LONG_MAX;
int n;
void ql(int i, int n, long long s1, long long s2, vector <long> &a){
	if(i == n){
		mi = min(abs(s1 - s2), mi);
		return;
	}
	ql(i + 1, n, s1 + a[i], s2, a);
	ql(i + 1, n, s1, s2 + a[i], a);
}


int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	ql(0, n, 0, 0, a);
	cout << mi;
	return 0;
}
