#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1; j < n ; j++){
			if(a[i] > a[j] * 2){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
