#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b == 0) return a;
	else return gcd(b, a%b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("CAU1.INP", "r", stdin);
	freopen("CAU1.OUT", "w", stdout);
	long x, y; cin >> x >> y;
	long gia_tri = gcd(x, y);
	int dem = 0;
	for(int i = 1 ; i <= sqrt(gia_tri) ; ++i){
		if(gia_tri%i == 0) dem += 2;
	}
	long so = sqrt(gia_tri);
	if(so*so == gia_tri) dem--;
	cout << dem;
	return 0;
}
