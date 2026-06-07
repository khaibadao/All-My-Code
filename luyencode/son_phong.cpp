#include<bits/stdc++.h>
#define Siz(x) x.size()
using namespace std;

unordered_map <char, vector <int>> paa;
void hoan(string &s, char a, char b){
	for(int i = 0; i < Siz(paa[a]) ; ++i){
		s[paa[a][i]] = b;
		paa[b].push_back(paa[a][i]);
	}
	sort(paa[b].begin(), paa[b].end());
    paa[a].clear();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	string s = "";
	int res = 0;
	while(t--){
		int so; cin >> so;
		if(so == 1){
			char x; cin >> x;
			paa[x].push_back(res);
			s += x;
			++res;
		}else
		{
			char a, b; cin >> a >> b;
			hoan(s, a, b);
//			cout << s << '\n';
		}
	}
	cout << s;
	return 0;
}
