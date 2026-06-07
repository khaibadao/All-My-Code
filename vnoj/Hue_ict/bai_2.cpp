#include<bits/stdc++.h>
using namespace std;
int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	string t; cin >> t;
	string s; getline(cin, s);
	vector <string> a(0);
	string xau = "";
	for(int i = 0 ; i < t.size() ; ++i){
		for(int j = 0 ; j < s.size() ; ++j){
			if(t[i] == s[j]){
				for(int z = j ; z < s.size() ; ++z){
					if(s[z] != ' ') xau += s[z];
					else{
						a.push_back(xau);
						xau = "";
					}
				}
			}
			
		}
	}
	for(int i = 0 ; i < a.size() ; ++i) cout << a[i] << ' ';
	return 0;
}
