#include<bits/stdc++.h>
using namespace std;
long long tach(long long x){
	int dem = 0;
	int ans = 1;
	for(int i = 2 ; i <= sqrt(x) ; ++i){
		while(x%i == 0){
			++dem;
			x /= i;
		}
	}
	ans = (dem + 1);
	if(x != 1){
		ans *= 2;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// N = 2
	// --> T = 24, T^2 = 576
	// *dem so uoc cua T^2 ma > T
	int q; cin >> q;
	while(q--){
		int n; cin >> n;
		long T1 = n, T2 = n + 1, T3 = n + 2;
		for(int i = 1 ; i <= )
	}
	return 0;
}
