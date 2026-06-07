#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("RECT.INP", "r", stdin);
	freopen("RECT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <int> v;
    for(int i = 1 ; i <= sqrt(n) ; ++i){
    	if(n%i == 0){
    		v.push_back(i);
		}
	}
	int a = 0, b = 0;
	int count = INT_MAX;
	sort(v.begin(), v.end());
	for(int i = 0 ; i < Siz(v) ; ++i){
		if(n/v[i] - v[i] < count){
			count = n/v[i] - v[i];
			a = v[i];
			b = n/v[i];
		}
	}
	cout << a << ' ' << b;
    return 0;
}
