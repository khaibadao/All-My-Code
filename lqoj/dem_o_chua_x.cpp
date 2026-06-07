#include<bits/stdc++.h>
using namespace std;
long long check(long long x){
	int res = 0;
	for(long long i = 5 ; i <= x ; i += 5){
		long long gia_tri = i;
		while(x%tmp == 0){
			++res;
			x /= i;
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
		int dem = 0;
		int n; cin >> n;
		long x; cin >> x;
		cout << n*n << ' ' << x << '\n';
		if(x <= (long long)n*n){
			if(x == 1){
		    	cout << 1 << '\n';
			}else if(x == 2 || x == 3 || x == 5 || x == 7) cout << 2 << '\n'; 
			else{
				for(int i = 2 ; i <= sqrt(x); ++i){
		     		if(x%i == 0) dem += 2;
		    	}
		    	long cnt = sqrt(x);
		    	if((long long)cnt*cnt == x){
		    		dem--;
		    		cout << dem;
				}else cout << dem << '\n';
			}
		}else cout << '0' << '\n';
	}
	return 0;
}
