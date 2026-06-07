#include <bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; getline(cin, s);
    string ten = "";
    for(int i = Siz(s) - 1; i >= 0 ; i--){
    	if(s[i] != ' ') ten = s[i] + ten;
		else break;
	}
	cout << "Tên: " << ten << " - " << "Họ đệm: ";
	for(int i = 0 ; i < Siz(s) - Siz(ten) ; ++i) cout << s[i];
    return 0;
}
