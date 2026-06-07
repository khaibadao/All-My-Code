#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k; cin >> k;
	string s; cin >> s;
	int chi_so_max = 0, chi_so_min = 1000000;
	vector <char> kt(0);
	vector <int> so_luong(0);
	int r1 = 0, r2 = 26;
	string cnt = "";
	
	for(int i = 0 ; i < s.size() ; ++i){
		if(s[i] > 57 && s[i - 1] < 57 && cnt.size() != 0){
			int ut = stoi(cnt);
			so_luong.push_back(ut);
			cnt = "";
			kt.push_back(s[i]);
		}else if(s[i] < 57)
		{
	    	cnt += s[i];	
		}else{
			kt.push_back(s[i]);
		}
	}
	int tmp = stoi(cnt);
	so_luong.push_back(tmp);
	
	return 0;
}
