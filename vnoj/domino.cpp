#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	if(n == 1){
		int x, y; cin >> x, y;
		if((x + y) % 2 == 1){
			return cout << -1, 0;
		}
	}
	bool check = false;
	int a = 0, b = 0;
	for(int i = 1 ; i <= n ; i++){
		int x, y; cin >> x >> y;
		if((x + y) % 2 == 1){
			check = true;
		}
		a += x;
		b += y;
	}
	if(a % 2 == 0 && b % 2 == 0){
		return cout << 0, 0;
	}
	if((a + b) % 2 == 1){
		return cout << -1, 0;
	}
	cout << (check ? 1 : - 1);
	return 0;
}
