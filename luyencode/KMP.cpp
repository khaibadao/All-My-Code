#include<bits/stdc++.h>
#define Siz(s) s.size()
#define MAX 100100
using namespace std;

int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s, t; cin >> s >> t;
	swap(s, t);
	int m = Siz(s), n = Siz(t);
	s = '&' + s;
	t = '$' + t;
	int kmp[MAX];
	int k = kmp[1] = 0;
	for(int i = 2 ; i <= m ; ++i){
		while(k > 0 && s[i] != s[k + 1]) k = kmp[k];
		kmp[i] = s[i] == s[k + 1] ? ++k : 0;
	}
	k = 0;
	int ans = 0;
	int match[MAX];
	for(int i = 1 ; i <= n ; ++i){
		while(k > 0 && t[i] != s[k + 1]) k = kmp[k];
		match[i] = t[i] == s[k + 1] ? ++k : 0;
		if(match[i] == m){
			++ans;
		}
	}
	cout << ans;
	return 0;
}
