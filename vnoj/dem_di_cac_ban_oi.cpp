#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
	}
	int i = 1, j = i + 6;
	int dem = 0;
	while(i <= n && j <= n + 1){
		if(j - i > 5 && abs((a[i] - a[j]))%23 == 0){
//			cout << i << ' ' << j << '\n';
			++dem;
    	}
		if(j == n){
			++i;
			j = i + 5;
		}else if(j - i <= 5) break;
//		cout << i << ' ' << j << '\n';
		++j;
	}
//	1 24 25 4 30 15 3 24 24 24
	cout << dem;
	return 0;
}
