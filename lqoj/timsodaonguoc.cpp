#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	int cnt = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] == '0' && cnt == 0){
			continue;
		}else
		{
			if(s[i] != 0 && cnt >= 0){
				cout << s[i];
				cnt++;
			}
		}
	}
	return 0;
}
