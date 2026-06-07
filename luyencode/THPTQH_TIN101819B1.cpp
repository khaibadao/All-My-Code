#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(string s){
	int t1 = Siz(s)/2, t2 = Siz(s) - 1;
	int i = 0, j = t1;
	while(i < t1 && j < t2){
		if(s[i] == s[j]){
			++i;
			++j;
		}else return false;
	}
	return true;
}
int main() {
//	freopen("transtr.inp", "r", stdin);
//	freopen("transtr.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    if(Siz(s)%2 != 0) cout << "NO";
    else
    {
    	if(check(s)) cout << "YES";
    	else cout << "NO";
	}
    return 0;
}

