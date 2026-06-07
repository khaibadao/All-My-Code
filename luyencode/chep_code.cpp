#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 2023
using namespace std;

int main()
{
	freopen("cfile.inp", "r", stdin);
	freopen("cfile.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	map <long, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int ans = 0;
	for(int i = 0 ; i < n - 1 ; i++){
		if(a[i] <= a[i + 1] && a[i] >= (double)0.9*a[i + 1]) continue;
		else ++ans;
	}
	cout << ans;
	return 0;
}
