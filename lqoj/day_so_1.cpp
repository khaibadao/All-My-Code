#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int  i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int gia_tri = 0;
	for(int i = 0 ; i < n ; ++i){
		for(int j = i + 1; j < n ; ++j){
			gia_tri = max(gia_tri, a[j] - a[i]);
			break;
		}
	}
	cout << gia_tri;
	return 0;
}
