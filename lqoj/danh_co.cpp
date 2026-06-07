#include<bits/stdc++.h>
using namespace std;
char check(long long a, long long b){
	if(a > b) return 'A';
	return 'B';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
	if(b < 10){
		cout << check(a, b);
	}else cout << check(a, b/10);
	return 0;
}
