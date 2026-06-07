#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long long sao = 1, cong = 1;
	long long res = 1;
//	cong = res*3;
	for(int i = 2 ; i < n ; ++i){
		if(i == 2){
			sao += 2;
		}else
		{
			res += 2;
			cong += res;
			sao += 2;
		}
	}
	cout << sao + sao + 2 << ' ' << cong;
	return 0;
}
