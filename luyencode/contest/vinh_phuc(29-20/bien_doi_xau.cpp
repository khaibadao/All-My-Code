#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("PROFACT.inp", "r", stdin);
//	freopen("PROFACT.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int a = 0, b = 0;
	for(char it : s)
	   if(it == 'A') ++a;
       else ++b;
    cout << min(a, b);
	return 0;
}
