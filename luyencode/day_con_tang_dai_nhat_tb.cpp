#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> a(n);
	vector<int> x(0);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		auto it = lower_bound(x.begin(), x.end(), a[i]);
		if(it == x.end()) x.push_back(a[i]);
		else *it = a[i];
		cout << x[i] << endl;
	}
//	for(int i = 0 ; i < x.size() ; ++i) cout << x[i] << " ";
//	cout << x.size();
	return 0;
}
