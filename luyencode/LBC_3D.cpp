#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool kt_check(char c) {
    return c == 'a' || c == 'u' || c == 'o' || c == 'e' || c == 'i';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	int ti = 0;
	while(t--){
		++ti;
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		string xau = "";
		for(int i = 0 ; i < Siz(s); ++i){
			if(s[i] == s[i + 1] && kt_check(s[i]) && i < n - 1) {
				xau += s[i];
				++i;
			}else xau += s[i];
		}
		cout << "Case #" << ti << ": " << xau << '\n';
	}
	return 0;
}
