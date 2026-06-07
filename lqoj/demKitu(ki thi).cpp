#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	map<char , int> mp;
	for(int i = 0 ; i < s.size() ; i++){
		mp[s[i]]++;
	}
	int cnt = 0;
	for(auto it : mp){
		if(it.second >= 2){
			cout << it.first << " ";
			cnt++;
		}
	}
	return 0;
}
