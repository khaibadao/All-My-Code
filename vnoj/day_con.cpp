#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m; cin >> n;
	long a[n + 1];
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	cin >> m;
	long b[m + 1];
	for(int i = 1 ; i <= m ; ++i) cin >> b[i];
	vector <long> so_1(0);
	vector <long> chi_so_1(0);
	vector <long> chi_so_2(0);
	int i = 1, j = 1;
	long res = 0;
	while(i <= n && j <= m){
//		cout << a[i] << ' ' << b[j] << '\n';
		if(a[i] == b[j]){
			res = i;
//			cout << a[i] << ' ' << b[j] << '\n';
			so_1.push_back(b[j]);
			chi_so_1.push_back(i);
			chi_so_2.push_back(j);
			++i; ++j;
    	}
		else{
			if(i == n && j < m){
				i = res;
				++j;
			}else ++i;
		}
	}
	vector <long> so_2(0);
	vector <long> chi_so_3(0);
	vector <long> chi_so_4(0);
	i = 1 ; j = 1;
	res = 0;
	while(i <= n && j <= m){
//		cout << a[i] << ' ' << b[j] << '\n';
		if(a[i] == b[j]){
			res = j;
//			cout << a[i] << ' ' << b[j] << '\n';
			so_2.push_back(a[i]);
			chi_so_3.push_back(i);
			chi_so_4.push_back(j);
			++i; ++j;
    	}
		else{
			if(j == m && i < n){
				j = res;
				++i;
			}else ++j;
		}
	}
	cout << so_1.size() << ' ' << so_2.size() << '\n';
	if(so_1.size() >= so_2.size()){
//		cout << '+' << '\n';
		cout << so_1.size() << '\n';
		for(int i = 0 ; i < so_1.size() ; ++i) cout << so_1[i] << ' ';
		cout << '\n';
		for(int i = 0 ; i < chi_so_1.size() ; ++i) cout << chi_so_1[i] << ' ';
		cout << '\n';
		for(int i = 0 ; i < chi_so_2.size() ; ++i) cout << chi_so_2[i] << ' ';
		cout << '\n';
	}else
	{
//		cout << '-' << '\n';
		cout << so_2.size() << '\n';
		for(int i = 0 ; i < so_2.size() ; ++i) cout << so_2[i] << ' ';
		cout << '\n';
		for(int i = 0 ; i < chi_so_3.size() ; ++i) cout << chi_so_3[i] << ' ';
		cout << '\n';
		for(int i = 0 ; i < chi_so_4.size() ; ++i) cout << chi_so_4[i] << ' ';
		cout << '\n';
	}
	return 0;
}
