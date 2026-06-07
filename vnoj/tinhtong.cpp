#include<bits/stdc++.h>
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
void Tong(string a, string b){
	int n1 = a.size(), n2 = b.size(), n = 0;
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
		int tmp = x[i] + y[i] + nho;
		z[n++] = abs(tmp % 10);
		nho = tmp / 10;
	}
	if(nho) z[n++] = nho;
	cout << n << endl;
	for(int i = n - 1; i >= 0 ; i--){
		cout << z[i] << " ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, m;
	string xau1 = "", xau2 = "";
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		xau1 += a[i] + '0';
	}
	cin >> m; 
	int b[m];
	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
		xau2 += b[i] + '0';
	}
	if(xau1.size() >= xau2.size()) Tong(xau1, xau2);
	else Tong(xau2, xau1);
	return 0;
}
