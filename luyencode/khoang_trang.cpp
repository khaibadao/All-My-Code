#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	cin.ignore();
	while(truy_van--){
		string s; getline(cin, s);
     	int ans = 0;
     	s += 'z';
     	for(int i = 0 ; i < s.size() ; ++i){
     		if(s[i - 1] == ' ' && 'a' <= s[i] && s[i] <= 'z') ++ans;
		}
     	cout << ans << '\n';
//     	else cout << ans << '\n';
	}
	return 0;
}
