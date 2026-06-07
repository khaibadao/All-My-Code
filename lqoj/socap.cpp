#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
    int so_vong = 0 , chi_so = 0 , dem = 0;
    while(so_vong <= n - 1){
    	so_vong++;
        for(int i = 0 ; i < n ; i++){
        	if(a[i] == a[chi_so] && i != chi_so){
        		cout << a[i] << '(' << i << ')' << " " << a[chi_so] << " " << chi_so << endl;
			}
		}
		chi_so++;
	}
	cout << dem;
    return 0;
}
