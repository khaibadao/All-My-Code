#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int max1 = 0 , max2 = 0;
	while(n--){
		int x; cin >> x;
		if(x > max1){
			max2 = max1;
			max1 = x;
		}
	}
	cout << max2;
	return 0;
}
