#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n; cin >> n;
	set <long> st;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		st.insert(a[i]);
		mp[a[i]]++;
	}
	int cnt = 0;
	cout << st.size() << endl;
	for(auto it : st){
		if(mp[it] > cnt){
			cnt = mp[it];
		}
	}
	cout << cnt;
	return 0;
}
