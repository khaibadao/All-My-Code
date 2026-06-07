#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("str.inp", "r", stdin);
//	freopen("str.out", "w", stdout);
	string s; cin >> s;
	int q; cin >> q;
	char a[s.size() + 1];
	map<int, int> mp;
	for(int i = 0 ; i < s.size() ; ++i){
		int x = s[i] - '0';
		++mp[x];
	}
	int res = 0;
	for(auto it : mp){
		++res;
		if(res == q){
			if(it.first == 2 || it.first == 3 || it.first == 5 || it.first == 7){
				cout << it.first << ' ' << "YES";
				return 0;
			}
        	else{
        		cout << it.first  << ' '<< "NO";
        		return 0;
			}
		}
	}
	if(res != q) cout << -1;
	return 0;
}
