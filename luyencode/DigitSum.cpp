#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	long sum = 0;
	for(char x : s) if('0' <= x && x <= '9') sum += x - '0';
	cout << sum;
	return 0;
}
