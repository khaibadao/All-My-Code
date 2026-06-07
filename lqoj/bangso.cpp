#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 3, m = 3;
	//sum moi hang moi cot phai bang nhau va co it nhat 2 pt khac nhau
	long a[n][m];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	long sum1, sum2, sum3;
	int gia_tri1 = 0;
	sum1 = a[1][1] + a[2][1] + a[3][1];
	sum2 = a[1][2] + a[2][2] + a[3][2];
	sum3 = a[1][3] + a[2][3] + a[3][3];
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= n - 1 ; j++){
			if(a[j][i] != a[j + 1][i]){
				gia_tri1++;
//				cout << a[j][i] << " " << a[j + 1][i] << " " << endl;
//				cout << "gia_tri : " << gia_tri1 << endl;
			}
		}
//		cout << endl;
	}
//	cout << gia_tri1 << endl;
//	cout << sum1 << " " << sum2 << " " << sum3 << endl;
	if(sum1 == sum2 && sum2 == sum3 && sum3 == sum1 && gia_tri1 >= 3){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
