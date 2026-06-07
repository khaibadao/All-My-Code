#include<bits/stdc++.h>
using namespace std;
int tong(int a, int b){
	return a + b;
}
int Lon(int a, int b){
	if(a > b) return a;
	return b;
}
int tach(char a){
	return a - 'A' + 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n, m; cin >> n >> m;
	int a[n + 1][m + 1];
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= m ; ++j){
			cin >> a[i][j];
		}
	}
//	SUM(A1,B2);
//	0123456789
	int q; cin >> q;
	while(q--){
		string xau; cin >> xau;
		if(xau[0] == 'S'){
			int i1 = xau[5] - '0';
			int i2 = xau[8] - '0';
			int j1 = tach(xau[4]);
			int j2 = tach(xau[7]);
			cout << tong(a[i1][j1], a[i2][j2]) << '\n';
//			cout << i1 << " " << i2 << " " << j1 << " " << j2 << '\n';
		}
		else
		{
			int i1 = xau[5] - '0';
			int i2 = xau[8] - '0';
			int j1 = tach(xau[4]);
			int j2 = tach(xau[7]);
			cout << Lon(a[i1][j1], a[i2][j2]) << '\n';
		}
//		}else cout << 4 << '\n';
	}
	return 0;
}
