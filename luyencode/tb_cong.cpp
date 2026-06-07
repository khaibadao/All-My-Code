#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n + 1];
	long long sum = 0, ans = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		if(a[i]%2 != 0){
			sum += a[i];
			++ans;
		}
	}
	cout << fixed << setprecision(4) << (float)sum/ans;
	return 0;
}
/**
  ^ ++
 /O\ ++
|___|
/___\
WMWMW
**/
