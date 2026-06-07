#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("bridge.inp", "r", stdin);
	freopen("bridge.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    sort(a.begin(), a.end(), greater <int> ());
    int sum = 0;
    for(int i = 0 ; i < n - 1 ; ++i){
    	sum += max(a[i], a[i + 1]);
	}
	cout << sum;
    return 0;
}

