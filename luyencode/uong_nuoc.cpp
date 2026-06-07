#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b == 0) return a;
	else return gcd(b, a%b);
}

int main()
{
	long long n, m; cin >> n >> m;
	if(n == m) cout << 0;
	else if(gcd(m, n) == 1) cout << -1;
	else
	{
		int mang[3] = {5, 3, 2};
		long long gia_tri = gcd(m, n);
		int dem = 0;
		cout << gia_tri << "\n";
		for(int i = 0 ; i < 3 ; ++i){
			while(n > gia_tri){
				
			}
		}
	}
	return 0;
}
