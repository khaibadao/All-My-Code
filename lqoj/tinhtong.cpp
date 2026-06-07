#include<bits/stdc++.h>
using namespace std;
void dao_nguoc(int a[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		int cnt = a[l];
		a[l] = a[r];
		a[r] = cnt;
	l++;
	r--;
	}
}
int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	dao_nguoc(a, n);
	int m; cin >> m;
	int b[m + 1];
	for(int i = 0 ; i < m ; i++){
		cin >> b[i];
	}
	dao_nguoc(b, m);
	if(n > m){
		int nho = 0;
		int n1 = n - 1, m1 = m - 1;
		string sum = "";
		while(n1 >= 0 && m1 >= 0){
			int cnt = a[n1] + b[m1];
			if(cnt >= 10){
				cnt += nho % 10;
				nho = 1;
			}else
			{
				cnt += nho;
				nho = 0;
			}
			sum += cnt;
			n1--; m1--;
		}	
	cout << sum << endl;
	}
	return 0;
}
