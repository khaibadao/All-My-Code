#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int k; cin >> k;
    while(n--){
    	int ans; cin >> ans;
    	string s; cin >> s;
    	map <string, int> mp;
    	string xau = "";
    	long long res = 0;
    	for(int i = 0 ; i < s.size() ; ++i){
    		xau += s[i];
    		++mp[xau];
    		for(int j = i + 1 ; j < s.size() - 1 ; ++j){
    			xau += s[j];
    			++mp[xau];
    			xau = s[i];
			}
			xau = "";
		}
		if(k == 2){
			for(auto it : mp){
				if(it.second == 1) ++res;
			}
			cout << res << '\n';
		}else
		{
			for(auto it : mp){
				if(it.second > 1) ++res;
			}
			cout << res << '\n';
		}
	}
    return 0;
}
