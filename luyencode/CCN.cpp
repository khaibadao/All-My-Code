#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void reverst(int a[], int n){
	int l = 0, r= n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l, --r;
	}
}

// tinh tong
void Tong(string a, string b){
	int res = 0;
	int n1 = a.size(), n2 = b.size(), n = 0;
	int chi_so_a = 0, chi_so_b = 0;
	int x[n1], y[n1], z[n1 + 1];
	for(int i = 0 ; i < n1 ; ++i){
		x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		y[i] = b[i] - '0';
	}
	reverst(x, n1), reverst(y, n2);
	for(int i = n2; i < n1; ++i){
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0; i < n1 ; ++i){
		if(nho) ++res;
		int tmp = x[i] + y[i] + nho;
		z[n++] = abs(tmp % 10);
		nho = tmp / 10;
	}
	if(nho) ++res;
	cout << res;
}

int main() {
//	freopen("ntmax.inp", "r", stdin);
//	freopen("ntmax.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b; cin >> a >> b;
    if(Siz(a) > Siz(b)){
    	Tong(a, b);
	}else Tong(b, a);
    return 0;
}

