#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	string t = "virus";
	int dem = 0;
	for(int i = 0 ; i < s.size() - 5; ++i){
		string cnt = "";
		cnt += s[i], cnt += s[i + 1], cnt += s[i + 2], cnt += s[i + 3], cnt += s[i + 4];
		if(cnt == t) ++dem;
	}
	cout << dem;
	return 0;
}
