#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	pair <long, int> nho;
	pair <long, int> lon;
	int Na = INT_MAX, Lo = INT_MIN;
	for(int i = 1 ; i <= n ; ++i){
		if(a[i] < Na){
			Na = a[i];
			nho.first = a[i];
			nho.second = i;
		}
		if(a[i] > Lo){
			Lo = a[i];
			lon.first = a[i];
			lon.second = i;
		}
	}
	cout << nho.first << ' ' << nho.second << ' ' << lon.first << ' ' << lon.second;
	return 0;
}
