#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, gia_tri; cin >> n >> m >> gia_tri;
	int a[n + 1][m + 1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = gia_tri ; i <= gia_tri + 1; i++){
    	for(int j = 1 ; j <= m ; j++){
	    	sort(a[j], a[j] + m);
		    cout << a[i][j] << " ";
        }
        break;
    }
	return 0;
}
