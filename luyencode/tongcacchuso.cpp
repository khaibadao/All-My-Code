#include<bits/stdc++.h>
using namespace std;
int main()
{
	int truy_van; cin >> truy_van;
		while(truy_van--){
		string s; cin >> s;
		long long cnt = 0;
		for(int i = 0 ; i < s.size(); i++){
			cnt += (s[i] - 48);
		}
		cout << cnt << endl;
	}
	return 0;
}
