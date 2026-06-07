#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	vector <long> b(0);
	long x = 0;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
	}
	int dem = 0;
//	cout << (b.size() + 1)/2;
    for(int i = 1 ; i <= n  ; ++i){
    	if(a[i] & i) ++dem;
	}
	cout << dem;
	return 0;
}
