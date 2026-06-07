#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int res = n;
	int cnt = 0;
	while(res > 0){
		string so = to_string(res);
		char kt = '0';
		for(char x : so) kt = max(kt, x);
		res -= kt - '0';
		++cnt;
	}
	cout << cnt;
	return 0;
}
