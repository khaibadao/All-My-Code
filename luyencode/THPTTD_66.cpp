#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("transtr.inp", "r", stdin);
//	freopen("transtr.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int count = 0;
    int res = 0;
    for(char x : s){
    	if(x == 'B') ++res;
    	else
    	{
    		if(res) ++count;
    		res = 0;
		}
	}
	if(res) count += res;
	cout << count;
    return 0;
}

