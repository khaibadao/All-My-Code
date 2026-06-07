#include<bits/stdc++.h>
#define Siz(x) x.size()

using namespace std;
int main()
{
//	freopen("bai3.inp", "r", stdin);
//	freopen("bai3.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int s1 = 0, s2 = 0;
	for(char x : s){
		if(x == '5') ++s1;
		else if(x == '9') ++s2;
	}
	string so = to_string(s1 + s2);
	bool check = true;
	for(char x : so){
		if(x == '5' || x == '9') continue;
		else check = false;
	}
	if(check) cout << "YES";
	else cout << "NO";
	return 0;
}
