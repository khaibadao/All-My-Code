#include<bits/stdc++.h>
using namespace std;
bool binary_search(long long a[], int n, long long x){
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
int main(){
	int n; cin >> n;
	long long x; cin >> x;
	long long a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		sort(a, a + n);
	}
	if(binary_search(a, n, x))
	    cout << "YES";
	else
	    cout << "NO";
	return 0;
}
