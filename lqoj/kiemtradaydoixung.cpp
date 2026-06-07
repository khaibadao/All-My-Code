#include<bits/stdc++.h>
//0988387999999
using namespace std;
int main()
{
	int n; cin >>n;
	long long a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	vector <int> d(0);
	if(n%2 == 0){
    	for(int i = 0 ; i < n/2 ; i++){
	    	d.push_back(a[i]);
    	}
	}else
	{
		for(int i = 0 ; i <= n/2 ; i++){
	    	d.push_back(a[i]);
    	}
	}
    int chi_so_d = 0, chi_so_n = n;
    int gia_tri = 0;
    while(chi_so_n == n/2){
    	if(n%2 == 0){
    		for(int i = n ; i > n/2 ; i--){
    			if(a[i] == d[chi_so_d]){
    				gia_tri++;
				}
			    chi_so_d++;
			}
		}else
		{
			for(int i = n ; i >= n/2 ; i--){
				if(a[i] == d[chi_so_d]){
					gia_tri++;
				}
		    	chi_so_d++;
			}
		}
    	n--;
	}
	if(gia_tri == n)
	  cout << "YES";
	else
	  cout << "NO";
	return 0;
}
