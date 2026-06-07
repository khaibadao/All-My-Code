#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	stack <int> st;
	int Siz = s.size();
	for(int i = 0 ; i < Siz ; ++i){
		if(s[i] == '(') st.push(i);
		else if(!st.empty() && s[i] == ')'){
		   	cout << st.top() + 1 << ' ' << i + 1 << '\n';
		    st.pop(); 
		}
	}
	return 0;
}
//(()((())))()()))()(
