#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	long long sum = 0;
	for(char x : s) sum += (x - 48);
	cout << sum;
	return 0;
}
