#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin >> n;
	long n1 = sqrt(n);
	if(n1*n1 == n) cout << "YES";
	else cout << "NO";
	return 0;
}
