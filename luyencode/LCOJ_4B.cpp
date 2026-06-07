#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 1000000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    stack <char> st;
    multiset <char> so;
    for(char x : s){
    	if('0' <= x && x <= '9') so.insert(x);
    	else{
    		st.push(x);
		}
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << '\n';
	for(auto it : so) cout << it;
    return 0;
}

