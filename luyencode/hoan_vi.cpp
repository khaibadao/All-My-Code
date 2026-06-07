#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	vector <int> a(n);
	vector <int> v(0);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 0 ; i < k ; ++i){
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end(), greater<int> ());
	int solonthuk = v[k - 1];
	cout << solonthuk << '\n';
	for(int i = k ; i < n ; ++i){
		if(a[i] > solonthuk){
			auto it = lower_bound(v.begin(), v.end(), a[i], greater <int> ());
			v.insert(it, a[i]);
			v.pop_back();
			solonthuk = v[k - 1];
		}
		cout << solonthuk << '\n';
	}
	return 0;
}
