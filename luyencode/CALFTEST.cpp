#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int n, S; 
int res = 0;
int a[haha], b[haha];
void ql(int suma, int sumb, int pos){
	if(suma > S) return;
	res = max(res, sumb);
	for(int i = pos ; i < n ; ++i){
		suma += a[i];
		sumb += b[i];
		ql(suma, sumb, i + 1);
		suma -= a[i];
		sumb -= b[i];
	}
}
int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> S;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i) cin >> b[i];
	ql(0, 0, 0);
	cout << res;
	return 0;
}
