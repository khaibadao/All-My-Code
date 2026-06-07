#include<bits/stdc++.h>
#define Mod 1000000000000000000
#define Siz(x) x.size()
using namespace std;
int so(long long x){
	while(x%10 == 0){
		x /= 10;
	}
	return x%Mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long long res = 1;
	for(int i = 2 ; i <= n ; ++i){
		res = i * res;
		res %= Mod;
		long long ans = so(res);
		res = ans;
	}
	cout << res << '\n';
	string hehe = to_string(res);
	int i = Siz(hehe) - 1;
	while(hehe[i] == '0'){
		--i;
	}
	cout << hehe[i];
	return 0;
}

