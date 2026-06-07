#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("LCS.INP", "r", stdin);
	freopen("LCS.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a, b; cin >> a >> b;
	int n1 = a.size(), n2 = b.size();
	int i = 0, j = 0;
	int ans = 0;
	map <char, int> mp;
	map <char, int> st;
	for(char x : a) ++mp[x];
	for(char x : b) ++st[x];
	while(i < n1 && j < n2){
		if(!mp[b[j]]){
			++ans;
			++j;
		}else if(a[i] != b[j]){
			++j;
		}else
		{
			++i;
		}
	}
	i = 0, j = 0;
	while(i < n1 && j < n2){
		if(!st[a[i]]){
			++ans;
			++i;
		}else if(a[i] != b[j]){
			++i;
		}else
		{
			++j;
		}
	}
	cout << ans;
	return 0;
}
