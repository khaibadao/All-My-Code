#include<bits/stdc++.h>
using namespace std;
char ki_tu(char a){
	return a - 32;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a, b; cin >> a >> b;
	char x = ki_tu(a);
	while(a != b){
		x = ki_tu(a);
		cout << x << ' ';
//		break;
        ++a;
	}
	x = ki_tu(a); cout << x;
	return 0;
}
