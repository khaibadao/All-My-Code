#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("demuoc.inp", "r", stdin);
//	freopen("demuoc.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s; cin >> s;
    long count = 0;
    bool t = false, so = false, h = false, len = false;
    if(Siz(s) >= 6) len = true;
    for(char x : s){
    	if('a' <= x && x <= 'z') t = true;
    	else if('A' <= x && x <= 'A') h = true;
    	else if('0' <= x && x <= '9') so = true;
    }
    if(t && so && h && len){
 		int i = 0, j = 0;
	}
    return 0;
}

