#include<bits/stdc++.h>
using namespace std;
int doi_xung(string a){
	int l = 0, r = a.size() - 1;
	while(l < r){
		if(a[l] == a[r]){
			++l, r--;
		}else return 0;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	vector <string> a(0);
	string xau = "";
	for(int i = 0 ; i < s.size() ; ++i){
		if(s[i] != ' '){
			xau += s[i];
		}else
		{
			a.push_back(xau);
			xau = "";
		}
	}
	int check = 0;
	if(xau.size()) a.push_back(xau);
	for(int i = 0 ; i < a.size() ; ++i){
		if(doi_xung(a[i])){
			++check;
			cout << a[i] << ' ';
		}
	}
	if(!check) cout << "Khong co tu doi xung";
	return 0;
}
