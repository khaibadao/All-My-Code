#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

void doo(string &s){ // tao ra mot xau moi khong co qua 3 ki tu trung nhau
	string ans = "";
	ans += s[0];
	for(int i = 1 ; i < Siz(s) ; ++i){
		if((s[i] != ans[max(i - 1, 0)])  && s[i] != ans[max(0, i - 2)]){
			ans += s[i];
//			cout << s[i] << ' ';
		}
	}
	ans.erase(ans.begin() + 0);
	s = ans;
}

int main() {
	freopen("BOUGAIN.INP", "r", stdin);
	freopen("BOUGAIN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s; cin >> s;
	doo(s);
	cout << Siz(s);
	return 0;
}

