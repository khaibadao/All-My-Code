#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	for(int i = 1; i <= n ; i++){
		cin >> a[i];
	}
	int m; cin >> m;
	long b[m + 1];
	for(int i = 1; i <= m ; i++){
		cin >> b[i];
	}
	int chi_so_b = 1;
	int chi_so_a = 1;
	int dem = 0;
	vector <long> A(0);
	vector <long> B(0);
	vector <int> Phan_tu(0);
	while(chi_so_b <= m){
		for(int i = chi_so_a; i <= n ; i++){
			if(chi_so_b > m){
				break;
			}else
			{
				if(a[i] == b[chi_so_b]){
					dem++;
					A.push_back(i);
					B.push_back(chi_so_b);
					Phan_tu.push_back(a[i]);
//					cout << a[i] << " " << b[cnt] << endl;
				}
			}
		}
		chi_so_b++;
		chi_so_a++;
	}
	cout << dem << endl;
	for(int i = 0 ; i < Phan_tu.size() ; i++){
		cout << Phan_tu[i] << " ";
	}
	cout << endl;
	for(int i = 0 ; i < A.size() ; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	for(int i = 0 ; i < B.size() ; i++){
		cout << B[i] << " ";
	}
	return 0;
}
