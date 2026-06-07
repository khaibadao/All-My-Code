#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	long long ans = 1e9;
//	s += ' ';
	string xau = "1";
	int i = 1;
	while(i < s.size()){
		string res = "";
    	string count = "";
		for(int z = 1 ; z < i; ++z){
			res += s[z];
		}
		xau += res;
		for(int t = i + 1 ; t < s.size() ; ++t){
			count += s[t];
		}
		cout << 1 << ' ' << res << ' ' << s[i] << ' ' << count << '\n';
		int so = s[i] - '0';
		while(so >= 0){
			char x = so + '0';
			cout << '\n' << x << '\n';
			xau += x + count;
			long long tyue = stoll(xau);
			if(tyue%4 == 0) ans = min(ans, tyue);
			xau = "1";
			xau += res;
			so--;
		}
		++i;
	}
	cout << ans;
	return 0;
}
