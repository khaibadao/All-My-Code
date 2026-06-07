#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	int ti = 0;
	while(t--){
		++ti;
		int n; cin >> n;
		string s; cin >> s;
		char kt = s[0];
		int count = 1, res = 1;
		for(int i = 1 ; i < s.size(); ++i){
			if(s[i] == kt) ++res;
			else
			{
				count = max(count, res);
				res = 1;
				kt = s[i];
			}
		}
		if(res != 1) count = max(count, res);
		cout << "Case #" << ti << ": " << count << '\n';
	}
	return 0;
}
