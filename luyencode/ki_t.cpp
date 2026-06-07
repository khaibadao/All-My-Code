#include<bits/stdc++.h>
#define hah 1000001
using namespace std;
string mat_khau = "";
int main()
{
//	freopen("matkhau.inp", "r", stdin);
//	freopen("matkhau.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map <char, int> mp;
		for(char x : s){
			++mp[x];
		}
		for(auto it : mp) if(it.second == 1){
			mat_khau += it.first;
			break;
		}
	}
	cout << mat_khau;
	return 0;
}
