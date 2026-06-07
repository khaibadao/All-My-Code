#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	string s; cin >> s;
	string t = s;
	int i = 0, j = 0, cnt = 0;
	while(i < n && j < n){
		if(s[i] != 'i' && s[i] != 'c' && s[i] != 't'){
			++i;
//			cout << s[i] << ' ';
		}
		else{
			j = i;
			int dem = 0;
			while(j < n){
				if(t[j] == 'i' || t[j] == 'c' || t[j] == 't'){
					++dem, ++j;
				}
				else break;
			}
			cnt = max(cnt, dem);
			i = j;
		}
//		cout << i << ' ' << j << '\n';
	}
	cout << cnt;
	return 0;
}
