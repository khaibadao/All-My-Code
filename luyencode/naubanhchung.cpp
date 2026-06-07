#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	int k; cin >> k;
	int chung = 0;
	int rieng  = 0;
	map <int, int> mp;
	for(int i = 1 ; i <= k ; i++){
	   	mp[i] = 1;
   	}
	while(t--){
		int a, b;
		cin >> a >> b;
		int dem = 1;
		chung = max(chung, b - a + 1);
		for(int i = a ; i <= b ; i++){
			mp[i]++;
		}
		for(int i = 1 ; i <= k ; i++){
			if(mp[i] > 1){
				if(mp[i] == mp[i + 1]){
					dem++;
				}else
				{
					rieng = max(dem, rieng);
					dem = 0;
				}
			}
		}
	}
	cout << chung << " " << rieng ;
	return 0;
}
