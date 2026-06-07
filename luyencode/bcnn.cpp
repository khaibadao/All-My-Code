#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b; cin >> a >> b;
	cout << abs(a/__gcd(a, b)*b);
	return 0;
}
