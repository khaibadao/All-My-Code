#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int dem[26] = {0};
		for(char x : s){
			dem[x]++;
		}
		for(int i = 0 ; i < s.size() ; i++){
			if(dem[s[i]] == 1){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
