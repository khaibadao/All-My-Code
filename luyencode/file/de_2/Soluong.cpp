#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("Soluong.inp", "r", stdin);
	freopen("Soluong.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	set <long> st;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		st.insert(a[i]);
	}
	cout << st.size();
	return 0;
}
