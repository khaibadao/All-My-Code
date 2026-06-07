#include<bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n){
    	if(n == 0) return 0;
    	int check = 1;
    	vector <int> a(n);
    	stack <int> st;
    	for(int i = 0 ; i < n ; ++i) cin >> a[i];
    	for(int i = 0 ; i < n ; ++i){
    		while(!st.empty() && st.top() == check){
    			++check;
    			st.pop();
			}
			if(a[i] == check) ++check;
			else st.push(a[i]);
		}
		while(!st.empty() && st.top() == check){
    			++check;
    			st.pop();
		}
		(check - 1 == n) ? cout << "yes" << '\n' : cout << "no" << '\n';
	}
    return 0;
}

