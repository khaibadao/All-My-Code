#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("replacedigit.inp", "r", stdin);
	freopen("replacedigit.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
	    string so = "";
	    for(char x : s){
	    	if(x != '0') so += x;
	    	else so += '5';
		}
		cout << so << '\n';
	}
    return 0;
}

