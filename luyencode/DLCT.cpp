#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int ans = 1, tmp = 0;
    map <char, int> mp;
    string s; cin >> s;
    int i = 0;
    int d = 0;
    while(i < Siz(s)){
    	++mp[s[i]];
    	if(mp[s[i]] > k){
    		--mp[s[i]];
    		ans = max(ans, tmp);
    		
		}else ++tmp;
		++i;
	}
	ans = max(ans, tmp);
	cout << ans << ' ' << i;
    return 0;
}

