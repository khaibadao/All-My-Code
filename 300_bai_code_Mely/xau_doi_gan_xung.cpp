#include<bits/stdc++.h>
using namespace std;
bool checkDX(string s){
	int l = 0, r = s.size() - 1;
	while(l < r){
		if(s[l] == s[r]){
			++l, r--;
		}else return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	int n = s.size() + 1;
	while(n--){
		if(checkDX(s)){
			cout << "YES";
			return 0;
		}else s = '0' + s;
	}
	cout << "NO";
	return 0;
}
