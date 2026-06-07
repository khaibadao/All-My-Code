#include<bits/stdc++.h>
#define hah 1000001
using namespace std;
void nguyen_to(long long n){
	long ans = 0;
	bool check = false;
	for(int i = 2 ; i <= sqrt(n); ++i){
		check = false;
		if(n%i == 0){
			while(n%i == 0){
//				cout << i << ' ';
	     		n /= i;
	    	}
	    	++ans;
		}
	}
	if(n != 1) ++ans;
//	cout << n << '\n';
	cout << ans;
}
int main()
{
	freopen("UocNT.inp", "r", stdin);
	freopen("UocNT.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	sang();
	long long n; cin >> n;
	nguyen_to(n);
	return 0;
}
