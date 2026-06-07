#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long a[n + 1];
	vector<long long> d(0);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	long long gia_tri = 0;
	long long cnt1 = 0;
	for(int i = 0 ; i < n ; i++){
		cnt1 += a[i]; 
		long long cnt2 = 0;
		for(int j = i + 1 ; j < n; j++){
			cnt2 += a[j];
		}
	    gia_tri = abs(cnt1 - cnt2);
	    cout << cnt1 << " " << cnt2 << endl;
	    d.push_back(gia_tri);
	}
	for(int i = 0 ; i < d.size() ; i++){
		sort(d.begin(), d.end());
	}
	cout << d[0];
	return 0;
}
