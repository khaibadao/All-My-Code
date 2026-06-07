#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1];
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	long mang[n + 1];
	mang[0] = 0;
	mang[1] = a[1];
	vector<int, int> b(0);
	for(int i = 2 ; i <= n ; ++i){
		mang[i] = max(mang[i - 1],max(mang[i -2] + a[i], mang[i - 3] + a[i] + a[i - 1]));
	}
	cout << mang[n];
	return 0;
}
