#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int sum = 0;
	if(n <= 1){
		cout << "NO";
		return 0;
	}
	while(n--){
		int x; cin >> x;
		x /= 100;
		sum += x;
	}
	if(sum%2 == 0){
		cout << "YES";
	}else
	{
		cout << "NO";
	}
	return 0;
}
