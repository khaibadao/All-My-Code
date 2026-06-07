#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	char a[n + 1][m + 1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	int cot = 1, hang = 1;
	int cnt = 1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			if(a[i][j] == 'x'){
				continue;
			}else
			{
				if(a[i][j] == '.' && a[i][j + 1] == '.' && a[i][j + 2] == '.' && cnt == 1){
					hang = i;
					cot = j;
					cnt++;
				}
			}
		}
	}
	cout << hang << " " << cot;
	return 0;
}
//pair you can truy cap in side bang cach kiem tra tung thang 
