#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	string s; cin >> s;
	set <char> st;
	for(int i = 0 ; i < s.size() ; i++){
		st.insert(s[i]);
	}
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] != s[i + 1] && st.size() >= 5){
			continue;
		}else
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
