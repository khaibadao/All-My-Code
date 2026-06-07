#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t; getline(cin, t);
	string s; getline(cin, s);
	vector <string> a(0);
	s += ' ';
	string xau = "";
	for(int i = 0 ; i < s.size() ; ++i){
		if(s[i] != ' '){
			xau += s[i];
		}else{
			a.push_back(xau);
			xau = "";
		}
	}
//	if(xau.size()) a.push_back(xau);
	sort(a.begin(), a.end());
//	for(int i = 0 ; i < a.size() ; ++i){
//		cout << a[i] << ' ';
//	}
//	cout << '\n';
	for(int i = 0 ; i < t.size() ; ++i){
		for(int j = 0 ; j < a.size() ; ++j){
//			cout << t[i] << ' ' << a[j] << '\n';
			if(t[i] == a[j][0] && a[j] != "1"){
//				cout << t[i]
				cout << a[j] << ' ';
				a[j] = "1";
			}
		}
	}
	return 0;
}
