#include<bits/stdc++.h>
using namespace std;
bool check(string a){
	int l = 0, r = a.size() - 1;
	while(l < r){
		if(a[r] == a[l]){
			++l; r--;
		}else return 0;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	s = '#' + s;
	int ans = 1;
	string trai = "", phai = "";
	string xau = "";
	int i = 1, j = s.size();
	while(i <= j){
		for(int x = 1 ; x < i ; ++x){
			trai += s[x];
		}
		for(int y = i + 1; y <= j ; ++y){
			phai += s[y];
		}
		xau += trai;
		xau += phai;
		cout << xau << '\n';
		int p = xau.size();
		if(check(xau)){
			ans = max(ans, p);
		}
		trai = phai = xau = "";
		++i;
	}
	cout << ans;
	return 0;
}
