#include<bits/stdc++.h>
using namespace std;
string xau_chinh = "1";
void Nhan(string a, string b)
{
	int n1 = a.size(), n2 = b.size();
	int x[n1], y[n2], z[n1 + n2 + 1] = {0}, n = 0; 
	int mang[n2][n1 + n2] = {0}; 
	memset(mang, 0, sizeof(mang));
	for(int i = 0 ; i < n1 ; ++i){
		x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		y[i] = b[i] - '0';
	}
	int hang = 0, cot = 0;
	int nho_1 = 0, so_1 = 0;
	int check = n1 + n2 - 1;
	for(int j = n2 - 1; j >= 0 ; j--){
		nho_1 = 0;
		cot = check; 
		for(int i = n1 - 1; i >= 0 ; i--){
			so_1 = y[j] * x[i] + nho_1;
		    nho_1 = so_1/10;          
		    mang[hang][cot--] = so_1%10;
		}
		if(nho_1) mang[hang][cot--] = nho_1;
		++hang;
		check--;
	}
	int nho = 0;
	for(int i = n2 + n1 - 1; i >= 0 ; i--){
    	int so = 0;
		for(int j = n2 - 1 ; j >= 0 ; j--){
			so += mang[j][i];
		}
		so += nho;
		nho = so/10;
		z[n++] = so%10;
	}
	if(nho) z[n++] = nho;
	int check1 = 0;
	xau_chinh = "";
	for(int i = n - 1; i >= 0 ; i--){
		if(z[i] == 0 && check1 == 0) continue;
		else{
//			cout << z[i];
			xau_chinh += z[i] + '0';
			++check1;
		}
	}
//	if(check1 == 0){
//		cout << 0;
//	}
}
int main()
{
	int n; cin >> n;
	string a[n + 1];
	a[n] = 1;
//	long long sum = 1;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		Nhan(xau_chinh, a[i]);
	}
	if(xau_chinh.size() > 19){
		cout << -1;
	}else if(xau_chinh.size() == 19){
		for(int i = 1 ; i < xau_chinh.size() ; ++i){
			if(xau_chinh[i] != 0){
				cout << -1;
				break;
			}
    	}
    }
    else cout << xau_chinh;
	return 0;
}
