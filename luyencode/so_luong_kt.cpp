#include<bits/stdc++.h>
using namespace std;

char doi(char x){
	return x + 32;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; getline(cin, s);
    map <char, int> mp;
    for(int i = 0  ; i < s.size() ; ++i){
    	if('A' <= s[i] && s[i] <= 'Z'){
    		char ki_tu = doi(s[i]);
    		s[i] = ki_tu;
		}
		++mp[s[i]];
	}
    int truy_van; cin >> truy_van;
    while(truy_van--){
    	char x; cin >> x;
    	if(x < 'a'){
    		char ki_tu = doi(x);
    		x = ki_tu;
		}
    	cout << mp[x] << '\n';
	}
    return 0;
}
