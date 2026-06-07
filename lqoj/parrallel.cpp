#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	while(n--){
		int a, b; cin >> a >> b;
		if((a <= 1 && b <= 2) || a >= 2 && b <= 1)
		   cout << "YES" << endl;
		else
		   cout << "NO" << endl;
	}
	return 0;
}
