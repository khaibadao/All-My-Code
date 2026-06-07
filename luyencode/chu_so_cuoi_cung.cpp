#include<bits/stdc++.h>
#define Mod 1000000000
using namespace std;
int check(int a, int b){
	long long check = 1;
	for(int i = 1 ; i <= b; ++i){
		(check *= a%Mod) %= Mod;
	}
	return check;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b; cin >> a >> b;
	int so = check(a, b);
	cout << so%10;
	return 0;
}
