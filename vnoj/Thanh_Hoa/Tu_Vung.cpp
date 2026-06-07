#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("CAU4.INP", "r", stdin);
	freopen("CAU4.OUT", "w", stdout);
	string s; cin >> s;
	int Phu_Am = 0, Nguyen_Am = 0;
	for(int i = 0 ; i < s.size() ; ++i){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		   ++Phu_Am;
		else ++Nguyen_Am;
	}
	cout << (long long)Phu_Am * Nguyen_Am;
	return 0;
}
