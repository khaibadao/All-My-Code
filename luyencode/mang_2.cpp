#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < m ; ++j){
    		cin >> a[i][j];
		}
	}
	long long sum = 0;
	for(int i = 0 ; i < n ; ++i){
		if(i%2 != 0){
		 	for(int j = 0 ; j < m ; ++j){
	    		sum += a[i][j];
			}
		}s
	}
	cout << sum;
    return 0;
}
