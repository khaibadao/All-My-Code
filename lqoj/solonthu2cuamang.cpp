#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	map<long, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	int cnt = mp.size() - 1;
	int gia_tri = 0;
	if(mp.size() == 1){
		cout << "NOT FOUND";
	}else
	{
		for(auto it : mp){
			gia_tri++;
			if(gia_tri == cnt){
				cout << it.first;
				break;
			}
		}
	}
	return 0;
}
