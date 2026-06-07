#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
long long sum(string s){
	long long res = 0;
	for(char x : s) res += x - '0';
	return res;
}
int main()
{
//	freopen("SOSINH.INP", "r", stdin);
//	freopen("SOSINH.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m; cin >> m >> n;
	int count = 0;
	for(long long i = m ; i <= m + n ; ++i){
//		long long sum = i;
		string so = to_string(i);
		long long res = sum(so);
		res += i;
		if(res <= m + n) ++count;
		else{
			cout << count;
			return 0;
		}
	}
	return 0;
}
