#include<bits/stdc++.h>
#define Siz(s) s.size()
#define MAX 100100
using namespace std;

int main(){
//	freopen("BAI1.INP", "r", stdin);
//	freopen("BAI1.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	long long tu = stoll(s);
	long long mau = 0;
	for(char x : s) mau += x - '0';
	(tu%mau == 0) ? cout << "YES" : cout << "NO";
	return 0;
}
