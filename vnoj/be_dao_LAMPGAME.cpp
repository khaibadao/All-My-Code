#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long a[n + 1], b[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i) cin >> b[i];
	long long cnt1 = 0, cnt2 = 0;
	vector <long long> v;
	for(int i = 0 ; i < n ; ++i){
		auto it = lower_bound(v.begin(), v.end(), b[i]);
		if(it == v.end()) v.push_back(b[i]);
		else *it = b[i];
	}
	long long sum = 0;
	for(int i = 0 ; i < v.size() ; ++i)
	{
//		cout << v[i] << ' ';
		sum += v[i];
	}
	cout << sum;
	return 0;
}
