#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> a[i][j];
		}
	}
	// chi duoc di cac nuoc di tu trai qua phai
	//i, j + 1 : so ben phai
	//i - 1, j + 1 : so phía trên bên right
	//i + 1, j + 1 : so phia duoi ben right
	// neu thang i = 0 thi ko kiem tra thang i - 1, j + 1
	// neu thang i = n - 1 thi ko kt thang i + 1, j + 1
	// neu thang j = 
	cout << endl;
	for(int i = 0 ; i < n  ; i++){
		for(int j = 0 ; j < m - 1  ; j++){
			if(i == 0){
				a[i][j] += max(a[i][j + 1], a[i + 1][j + 1]);
			}else
			{
				if(i == n - 1){
					a[i][j] += max(a[i][j + 1], a[i - 1][j + 1]);
				}else
				a[i][j] += max(a[i][j + 1], max(a[i - 1][j + 1], a[i + 1][j + 1]));
			}
		}
	}
	cout << *max_element(a[n - 1], a[n - 1] + m) << endl;
	return 0;
}
