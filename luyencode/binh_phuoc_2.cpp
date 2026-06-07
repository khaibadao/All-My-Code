#include<bits/stdc++.h>
#define Mod 1000001
#define Siz(s) s.size()
using namespace std;
int dem[Mod];
int main(){
	freopen("xaucon.inp", "r", stdin);
	freopen("xaucon.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	001100101110
	string s; cin >> s;
	int i = 0, j = 0;
	long ans = 0;
	while(i < Siz(s) && j < Siz(s)){
		if(s[i] == '0'){
			long res = 0;
			while(s[j] == '0'){
				++res;
				++j;
			}
			ans = max(ans, res);
			i = j;
		}else{
			++i;
//			001100101110
			j = i;
		}
//		cout << i << '\n';
	}
	cout << ans;
	return 0;
}
