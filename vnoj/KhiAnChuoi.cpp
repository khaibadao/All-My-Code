#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 1];
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
		}
	    int sum = 0, dem = 1, cnt = 2;
        while(cnt <= n + 1){
    	    if(a[cnt] == a[1]){
        		dem++;
			}else
			{
				sum += a[cnt];
				if(sum >= a[1]){
					dem++;
					sum = 0;
				}
			}
			cnt++;
		}
		cout << dem << endl;
	}
	return 0;
}
