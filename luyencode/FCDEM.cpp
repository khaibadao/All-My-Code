#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

bool check(string s){
	for(char x : s){
		if(x != '0') return true;
	}
	return false;
}

void doo(string s)
{
	s += ' ';
	int am = 0, duong = 0;
	bool dau = true; // false == am
	string tmp = "";
	for(int i = 0 ; i < Siz(s) ; ++i){
		if(s[i] == '-') dau = false;
		else if('0' <= s[i] && s[i] <= '9') tmp += s[i];
		else
		{
			if(!dau) ++am;
			else if(check(tmp)) ++duong;
			tmp = "";
			dau = true;
		}
	}
	cout << am << ' ' << duong;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int n; cin >> n;
    cin.ignore();
    string s; getline(cin, s);
    doo(s);
    return 0;
}

