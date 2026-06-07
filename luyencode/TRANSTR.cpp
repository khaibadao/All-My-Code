#include <bits/stdc++.h>
#define en '\n'
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("TRANSTR.inp", "r", stdin);
	freopen("TRANSTR.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    queue <string> qe;
    string xau = "";
    int i = 0;
    int res = 0;
    if(s[0] == 'B') res = 1;
    int count = 0;
    if(res == 1){
    	double M = 0.0;
    	int a = 0, b = 0;
    	int chi_so = 0;
    	for(int i = 0 ; i < Siz(s) ; ++i){
    		if(s[i] == 'A') ++a;
			else if(s[i] == 'B'){
				++b;
				if(a > 0 && b > 0 && b > a){
					double res = (double)b/a;
					if(res > M){
						chi_so = i;
						M = res;
					}
				}
			}
		}
		int count = 1;
		for(int i = 0 ; i <= chi_so ; ++i){
			if(s[i] == 'A') s[i] = 'B';
			else s[i] = 'A';
		}
		for(int i = 0 ; i < Siz(s) ; ++i){
			if(s[i] == 'B') ++count;
		}
		cout << count;
	}
    return 0;
}

