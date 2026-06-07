#include<bits/stdc++.h>
#define Siz(n) n.size()
#define F(i, n) for(int i = 0 ; i < n.size() ; ++i)
using namespace std;
bool check_dx(string s){
	int l = 0, r = Siz(s) - 1;
	while(l < r){
		if(s[l] == s[r]){
			++l, --r;
		}else return false;
	}
	return true;
}
bool check_sum(string s){
	long sum = 0;
	for(char x : s){
		sum += x - '0';
	}
	if(sum%10 == 0) return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	set <string> st;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}
