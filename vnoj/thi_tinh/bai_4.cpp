#include<bits/stdc++.h>
using namespace std;
void sang(){
	int n, k; cin >> n >> k;
	long long a[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	vector<long long> v(0);
	for(int i = 0 ; i < n ; ++i){
		auto it = lower_bound(v.begin(), v.end(), a[i]);
		if(it == v.end()) v.push_back(a[i]);
		else *it = a[i];
	}
	long long sum = 0;
	for(int i = 0 ; i < v.size() ; ++i){
		sum += v[i];
	}
	cout << sum;
}
int main()
{
	sang();
	return 0;
}
