#include<bits/stdc++.h>
#define Siz(n) n.size()
#define F(i, n) for(int i = 0 ; i < n.size() ; ++i)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	while(truy_van--){
		string s; cin >> s;
		stack <int> st;
		int ans = 0;
		for(int i = 0 ; i < Siz(s) ; ++i){
			if(s[i] == '(') st.push(i);
			else
			{
				if(!st.empty()){
				++ans;
				st.pop();
	    		}else ++ans;
			}
		}
		while(!st.empty()){
			++ans;
			st.pop();
		}
		cout << ans << '\n';
	}
	return 0;
}
