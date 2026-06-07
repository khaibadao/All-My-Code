#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("bonus.inp", "r", stdin);
	freopen("bonus.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <long long> a(n);
    long long res = 0;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	if(a[i] > res){
    		res = a[i];
		}
		cout << res << '\n';
	}
    return 0;
}
