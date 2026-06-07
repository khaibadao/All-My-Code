#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    long a[n + 1];
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    while(m--){
    	int l, r; cin >> l >> r;
    	if(l == r) cout << "Yes" << endl;
    	else if(l + 1 == r) cout << "Yes" << endl;
    	else
    	{
    		int so = 0, chi_so = l;
	    	for(int i = l ; i <= r; ++i){
	    		if(a[i] > a[i + 1]) break;
	    		else{
	    			so = a[i + 1];
	    			chi_so = i + 1;
				}
			}
			
			int check = 0;
			for(int i = r ; i > chi_so ; i--){
				if(a[i - 1] < a[i]){
					cout << "No" << endl;
					check = 1;
					break;
				}
			}
			if(!check) cout << "Yes" << endl;
		}
	}
	return 0;    
}

