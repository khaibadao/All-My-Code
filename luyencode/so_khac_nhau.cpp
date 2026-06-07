#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(int n){
	string s = to_string(n);
	int l = 0, r = Siz(s) - 1;
	while(l < r){
		if(s[l] == s[r]){
			++l, --r;
		}else return false;
	}
	return true;
}
int main() {
	freopen("khacnhau.inp", "r", stdin);
	freopen("khacnhau.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin, s);
    s = s +  '#';
    set <long long> st;
    string xau = "";
    for(char x : s){
    	if('0' <= x && x <= '9') xau += x;
    	else
    	{
    		long long so = stoll(xau);
    		st.insert(so);
    		xau = "";
		}
	}
	cout << st.size();
    return 0;
}

