#include<bits/stdc++.h>
using namespace std;
long long check(long long x){
	int res = 0;
	for(long long i = 5 ; i <= x ; i += 5){
		long long gia_tri = i;
		while(gia_tri%5 == 0){
			++res;
			gia_tri /= 5;
		}
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long x; cin >> x;
		int dem = check(x);
		cout << dem << '\n';
	}
	return 0;
}
