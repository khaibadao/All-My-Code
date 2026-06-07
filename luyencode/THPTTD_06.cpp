#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("STRING.inp", "r", stdin);
	freopen("STRING.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
	for(int i = 1 ; i < Siz(s); ++i){
		if(s[i] != s[i - 1]){
			s[i] = s[i - 1] = '#';
			++res;
			++i;
		}else{
			++res;
			s[i - 1] = '#';
		}
	}
	if(s[Siz(s) - 1] != '#') ++res;
	cout << res;
    return 0;
}

