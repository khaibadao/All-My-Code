#include<bits/stdc++.h>
using namespace std;
int prime[10] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};
int main()
{
	string s; cin >> s;
	int cnt = 0;
	for(char x : s){
		if(prime[x - 48] == 1){
			prime[x]++;
			cout << x << " ";
			cnt++;
		}
	}
	if(!cnt){
		cout << 0;
	}
	return 0;
}
