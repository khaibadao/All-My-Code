#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("TENGOI.inp", "r", stdin);
//	freopen("TENGOI.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	int ans = 0, res = 0;
	while(t--){
		string s; cin >> s;
		int count = 0, do_dai = 0;
		for(int i = 0 ; i < s.size() ; ++i){
			if(s[i] == 'W' || s[i] == 'A' || s[i] == 'R'){
				count = max(count, do_dai);
				do_dai = 0;
			}else{
				++do_dai;
			}
		}
		if(count > ans){
		   ans = count;
		   res = 1;
		}else if(ans == count){
			++res;
		}
	}
	if(ans == 0 && res == 0) cout << "NO";
	else cout << ans << ' ' << res;
	return 0;
}
