#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	vector <int> chan(0); vector <int> le(0);
	for(int i = 0 ; i < n ; ++i){
		if(a[i]%2 == 0) chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(le.begin(), le.end(), greater <int> ());
	sort(chan.begin(), chan.end());
	long long sum = 1;
	vector <int> ans(0);
	for(int i = 0 ; i < chan.size() ; ++i){
		ans.push_back(chan[i]);
		
	}
	cout << sum;
	return 0;
}
