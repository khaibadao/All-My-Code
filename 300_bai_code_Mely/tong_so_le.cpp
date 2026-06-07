#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	long long sum = 0;
	for(auto x : a){
		if(x%2 != 0) sum += x;
	}
	cout << sum;
	return 0;
}
