#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long a[n + 1];
	map <long, int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	int cnt = mp.size();
	long max1 = 0, max2 = 0;
	if(cnt == 1){
		cout << "NOT FOUND";
		return 0;
	}else
	{
		for(auto it : mp){
			if(it.first > max1){
				max2 = max1;
				max1 = it.first;
			}
		}
	}
	cout << max2;
	return 0;
}
