#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <int> a(n);
	int ma = INT_MIN, mi = INT_MAX;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		ma = max(a[i], ma);
		mi = min(a[i], mi);
	}
	cout << ma << ' ' << mi;
	return 0;
}
