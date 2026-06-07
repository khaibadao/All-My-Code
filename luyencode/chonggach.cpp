#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long dem = 0;
	int k = a[n];
	for(int i = n - 1 ; i >= 1 ; i--){
		if(k >= 1){
			k--;
			k = min(k, a[i]);
			++dem;
		}
	}
	cout << dem + 1;
	return 0;
}

//7
//0 6 2 1 0 0 0 0 

//6 5 5 
