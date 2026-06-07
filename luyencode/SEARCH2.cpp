#include<bits/stdc++.h>
using namespace std;
bool binary_search(long a[], int n, long x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x)
			return true;
		else if(a[m] < x){
			   l = m + 1;
			}else{
			   r = m - 1;
	    	}
		}
	return false;
}
int main()
{
	int n, m; cin >> n >> m;
	vector<long>a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	while(m--){
		long x; cin >> x;
		if(binary_search(a, n, x)){
			cout << x << " ";
			a.erase
		}else{
			cout << 0 << " ";
		}
	}
	return 0;
}
