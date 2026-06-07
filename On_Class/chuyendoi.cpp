#include <bits/stdc++.h>
#define Mod 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int t = 1;
    while(t--){
    	long long a; cin >> a;
    	string s = "";
    	bool check = false;
    	for(int i = 63 ; i >= 0 ; i--){
    		if(a&(1LL << i)){
    			check = true;
    			s += '1';
			}else if(!s.empty()) s += '0';
		}
//		for(char x:s){
//			(x == '0') ? cout << 1 : cout << 0;
//		}
		cout << s << en;
	}
    return 0;
}