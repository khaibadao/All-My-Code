#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j <= i ; ++j){
			long long x = a[i]*a[j];
			long long y = sqrt(x);
			if(y * y == x) ++cnt;
		}
	}
	cout << ++cnt;
	return 0;
}
