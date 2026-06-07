#include<bits/stdc++.h>
using namespace std;
void st(int n, string s = ""){
	cout << n << " ";
	if(n == 0) cout << s << endl;
	else{
		st(n - 1, s + '0');
		st(n - 1, s + '1');
		st(n - 1, s + '2');
	}
}
int main()
{
	int n; cin >> n;
	st(n);
	return 0;
}
