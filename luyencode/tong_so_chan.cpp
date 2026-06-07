#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int tong(int a, int b){
	if(a == b) return a;
	else return a + tong(a + 2, b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b; cin >> a >> b;
	if(a%2 != 0) ++a;
	if(b%2 != 0) --b;
	int sum = tong(a, b);
	cout << sum;
	return 0;
}
