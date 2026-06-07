#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main()
{
	int n; cin >> n; int dem = 0, chi_so = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 1;
	for(int i = 1 ; i < n ; i++){
		if(a[i] == a[i - 1]){
			cnt++;
		}else
		{ 
	    	dem++;
			chi_so = max(chi_so, cnt);	
			cnt = 1;
		}
	}
	dem++;
	chi_so = max(chi_so, cnt);
	cout << dem << endl << chi_so;
	return 0;
}
