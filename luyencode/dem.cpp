#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; long k; cin >> k;
	long a[n + 1];
//	pair <long, int> pi = {-1e9, 0};
    stack <long> st;
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
//		if(a[i] == k) st.push(a[i]);
	}
	for(int i = 0 ; i < n ; ++i)
	    if(a[i] == k) st.push(a[i]);
	cout << st.size();
	return 0;
}
