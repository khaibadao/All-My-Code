#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	long chan[n + 1] = {0}, le[n + 1] = {0};
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		if(a[i] % 2 == 0){
			chan[i] = a[i];
		}else
		{
			le[i] = a[i];
		}
	}
	sort(le, le + n);
	sort(chan, chan + n);
    long long gia_tri = max(le[n - 1] + le[n - 2], chan[n - 1] + chan[n - 2]);
    if(gia_tri % 2 == 0){
    	cout << gia_tri;
	}else
	{
		cout << -1;
	}
	return 0;
}
