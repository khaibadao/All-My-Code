#include<bits/stdc++.h>
using namespace std;
long long fn[100] = {0};
void fibo(int n){
	int fn[0] = 0, fn[1] = 1;
	long long sum = 0;
	for(int i = 2, i <= n ; i++){
		fn[i] = fn[i - 1] + f[i - 2];
		sum += fn[i];	
	}
	cout << sum + 1;
}
int main()
{
	int n; cin >> n;
	fibo(n);
	return 0;
}
