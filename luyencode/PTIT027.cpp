#include <bits/stdc++.h>
#define Mod 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;


int main() {
//	freopen("chiak.inp", "r", stdin);
//	freopen("chiak.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	stack <int> st;
    	st.push(-1);
    	int ans = 0;
    	for(int i = 0 ; i < Siz(s) ; ++i){
    		if(s[i] == '(') st.push(i);
    		else
    		{
    			st.pop();
    			if(!st.empty()){
    				int res = st.top();
    				ans = max(ans, i - res);
				}
				else st.push(i);
			}
		}
		cout << ans << en;
	}
    return 0;
}

