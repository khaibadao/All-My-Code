#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int a[3][3];
	long long sum = 0;
//	set <long> st;
	for(int i = 0 ; i < 3 ; ++i){
		set <long> st;
		for(int j = 0 ; j < 3 ; ++j){
			cin >> a[i][j];
			st.insert(a[i][j]);
			if(i == 0) sum += a[i][j];
		}
		if(st.size() == 1){
			cout << "NO"; 
			return 0;
		}
	}
	int hang_ngang = 1, hang_doc = 0;
	for(int i = 1 ; i < 3 ; ++i){
		long long s = 0;
		map <long, int> mp;
		for(int j = 0 ; j < 3 ; ++j){
			s += a[i][j];
			++mp[a[i][j]];
			if(j == 2){
				if(s == sum && mp.size() >= 2) ++hang_ngang;
			}
		}
	}
	for(int i = 0 ; i < 3 ; ++i){
		long long s = 0;
		map <long, int> mp;
		for(int j = 0 ; j < 3 ; ++j){
			s += a[j][i];
			++mp[a[j][i]];
			if(j == 2){
				if(s == sum && mp.size() >= 2) ++hang_doc;
			}
		}
	}
	if(hang_doc == hang_ngang && hang_ngang == 3) cout << "YES";
	else cout << "NO";
	return 0;
}
