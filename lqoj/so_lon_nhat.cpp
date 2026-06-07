#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; getline(cin, s);
	vector <string> ma_so(0);
	int i = 0, j = 0;
	int n = sizeof(s);
	string so = "";
	for(char x : s){
		if('0' <= x && x <= '9' || x == '-'){
			so += x;
		}else
		{
			if(so.size() > 0){
				ma_so.push_back(so);
	     		so = "";
			}
		}
	}
	if(so.size()) ma_so.push_back(so);
	long long ans = 0;
	for(auto it : ma_so){
		long long t = stoll(it);
		ans = max(t, ans);
	}
//	for(int i = 0 ; i < ma_so.size() ; ++i) cout << ma_so[i] << ' ';
    cout << ans;
	return 0;
}
