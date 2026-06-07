#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("LONGXAU.inp", "r", stdin);
//	freopen("LONGXAU.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0 ; i < n ; ++i){
    	if(s[i] == '?'){
    		if(i == n - 1 && s[i - 1] == 'b') s[i] = 'b';
    		else if(i == 0 && s[i + 1] == 'a') s[i] = 'a';
    		else if(s[i - 1] == 'a' || s[i + 1] == 'b') s[i] = 'b';
    		else s[i] = 'b';
		}
	}
//	cout << s << '\n';
	int count = 0;
	for(int i = 0 ; i < n - 1 ; ++i){
		if(s[i] == 'a' && s[i + 1] == 'b'){
//			cout << s[i] << ' ' << s[i + 1] << '\n';
			++count;
		}
		else if(s[i] == 'b' && s[i + 1] == 'a'){
//			cout << s[i] << ' ' << s[i + 1] << '\n';
			--count;
		}
	}
	cout << count;
    return 0;
}

