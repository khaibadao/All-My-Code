#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
unsigned long long sum(string s){
	unsigned long long res = 0;
	for(char x : s) res += x - '0';
	return res;?n
}
int main()
{
//	freopen("SOSINH.INP", "r", stdin);
//	freopen("SOSINH.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n, m; cin >> m >> n;
	long long co_dinh = m;
	long long count = m;
	string s = to_string(m);
	count += sum(s);
	long long kq = 0;
	while(count - n <= co_dinh){
		++m;
		++kq;
		count = m;
		string s = to_string(m);
		count += sum(s);
	}
	cout << kq;
	return 0;
}
