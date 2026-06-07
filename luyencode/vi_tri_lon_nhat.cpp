#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	pair <long, int> pi = {-1e9, 0};
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		if(a[i] >= pi.first){
			pi.first = a[i];
			pi.second = i;
		}
	}
	cout << pi.second;
	return 0;
}
