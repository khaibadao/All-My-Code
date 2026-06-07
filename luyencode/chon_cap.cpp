#include<bits/stdc++.h>
#define Mod 99999999
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	int ans = 0;
	sort(a.begin(), a.end());
	int res = n - 1;
	for(int i = 0 ; i < n ; ++i){
		if(i == res) break;
		else if(a[i] + a[res] >= 0 && a[i] != Mod && a[res] != Mod && res != i){
			a[res] = a[i] = Mod;
			++ans;
			--res;
		}
		else continue;
	}
	cout << ans;
	return 0;
}
