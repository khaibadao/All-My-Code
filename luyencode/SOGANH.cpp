#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

void doo(string s){
	long ans = 0; // 823 568
	// y tuong : di tu giua ra, neu kiem tra gap mot truong hop thi break !
	for(int i = 0 ; i < Siz(s)/2 ; ++i){
		int j = Siz(s) - i - 1;
		string l = s.substr(0, i + 1), r = s.substr(j, Siz(s) - 1);
//		cout << l << "(l)" << ' ' << r << "(r)" << en;
		if(l == r){
			ans = max((long)i + 1, ans);
		}
	}
	(!ans) ? cout << -1 : cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s; cin >> s;
	doo(s);
	return 0;
}

