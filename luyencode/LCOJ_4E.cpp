#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 1000000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long k; cin >> k;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    sort(a.begin(), a.end(), greater <int> ());
    for(int i = 0 ; i < n ; ++i){
    	if(a[i] <= k){
    		cout << a[i] << ' ';
    		k -= a[i];
		}
	}
    return 0;
}

