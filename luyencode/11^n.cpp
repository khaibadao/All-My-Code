#include<bits/stdc++.h>
using namespace std;

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
	for(int i = n - 1; i >= 0 ; i--){
		if(z[i] == 0 && check1 == 0) continue;
		else{
			cout << z[i];
			++check1;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int n; cin >> n;
	string so = "";
	for(int i = 0 ; i < n ; ++i) so += '1';
	Nhan(so, so);
	return 0;
}
