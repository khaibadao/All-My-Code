#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	stack <long> st;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	int res = 0;
	long ans = 0;
	for(int i = 0 ; i < n ; ++i){
		if(st.empty()) st.push(a[i]);
		else
		{
			if(a[i] <= st.top()){
				if(a[i] < st.top()){
			    	++res;
			    	st.push(a[i]);
				}else if(a[i] == st.top() && ans > a[i]){
			    	res += 2;
			    	st.push(a[i]);
			    }else{
			    	++res;
			    	st.push(a[i]);
				}
			}else
			{
				while(!st.empty() && a[i] > st.top()){
					st.pop();
					++res;
				}
				if(Siz(st) >= 1){
					++res;
				}
				st.push(a[i]);
			}
		}
		ans = max(ans, st.top());
	}
	cout << res;
	return 0;
}
