#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n; cin >> n;
	long long sum = 1;
	int ans = 0;
	for(int i = 1 ; i <= n; ++i){
		sum *= 4 * i;
//		++ans;
	}
	cout << sum + 1;
	return 0;
}
