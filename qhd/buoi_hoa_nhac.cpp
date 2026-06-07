#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n +  1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	stack <int> st;
	int count = 0;
	int ans = 0;
	for(int i = 0 ; i < n; ++i){
		if(st.empty()){
			st.push(i);
		}else
		{
			while(!st.empty() && a[st.top()] > a[i] && a[i])
		}
	}
	cout << '\n' << count;
    return 0;
}
