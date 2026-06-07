#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	int n; cin >> n;
	while(n--){
		map <char, int> mp;
		int l, r;
		cin >> l >> r;
		for(int i = l ; i <= r ; i++){
			mp[s[i]]++;
		}
		int max2 = 0; int max1 = 0;
		for(auto it : mp){
			if(max1 <= it.second || (max2 < max1 && max2 <= it.second)){
				max2 = max1;
				max1 = it.second;
			}
			cout << it.first << " " << it.second << endl; 
		}
		cout << max2 << endl;
	}
	return 0;
}
