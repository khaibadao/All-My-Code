#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    int cnt = 0;
    string xau = "";
    for(char x : s){
    	if('A' <= x && x <= 'Z') xau += x;
    	else{
    		if(Siz(xau)){
    			++cnt;
    			xau = "";
			}
		}
	}
	if(Siz(xau)){
    	++cnt;
    	xau = "";
	}
	cout << cnt;
	return 0;
}

