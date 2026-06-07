#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long max = 0;
	while(n--){
		long x; cin >> x;
		if(x > max){
			max = x;
		}
	}
	cout << max << endl;
	return 0;
}
