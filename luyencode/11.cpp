#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 11;
	int a[11];
	bool check = false;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n - 1 ; ++i){
		if(a[10] == a[i]){
			cout << i + 1 << ' ';
			check = true;
		}
	}
	if(!check) cout << -1;
	return 0;
}
