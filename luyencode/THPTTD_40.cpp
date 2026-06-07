#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("maxnum.inp", "r", stdin);
//	freopen("maxnum.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int k; cin >> k;
    string s; cin >> s;
    while(k--){
    	bool c = true;
    	for(int i = 0 ; i < Siz(s) - 1 ; ++i){
    		if(s[i] < s[i + 1]){
    			cout << s[i] << ' ' << s[i + 1] << '\n';
    	        c = false;
				s.erase(s.begin() + i);
				break;	
			}
		}
		if(c) s.pop_back();
	}
	cout << s;
    return 0;
}

