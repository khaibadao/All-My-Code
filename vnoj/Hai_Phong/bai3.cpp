#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long k; cin >> k;
	long a[n + 1];
	map <long long, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	int check = 0;
	for(int i = 0 ; i < n ; ++i){
	    long long gia_tri = 2*k - a[i];
		if(mp[gia_tri]){
			mp[a[i]] = mp[gia_tri] = 0;
			break;
		}
	}
	for(int i = 0 ; i < n ; ++i){
		if(mp[a[i]] == 0 && check != 2){
			cout << i + 1 << " ";
			++check;
		}else if(check == 2) break;
	}
	if(!check) cout << 0 << " " << 0;
	return 0;
}
