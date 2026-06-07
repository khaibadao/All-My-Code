#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	long long k; cin >> k;
	int a[n + 1];
//	long long sum = 0;
	int cnt = 1000000;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		long long sum = 0;
		sum += a[i];
		int dem = 1;
		for(int j = i + 1; j < n ; ++j){
			if(sum == k && dem == 1){
				cout << 1;
				return 0;
			}else
			{
				if(dem <= cnt && sum < k){
					++dem;
					sum += a[j];
				} 
				else{
					cnt = min(cnt, dem);
					break;
				}
	    	}
    	}
    }
	if(cnt == 1000000) cout << - 1;
	else cout << cnt;
	return 0;
}
