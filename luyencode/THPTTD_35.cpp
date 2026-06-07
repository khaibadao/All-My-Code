#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("query.inp", "r", stdin);
//	freopen("query.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    int i = 0, j = 0;
    int ans = 0;
    while(i < n && j < n){
    	j = i;
    	long long sum = 0;
    	while(j < n){
    		sum += a[j];
    		if(sum == 0){
    			++ans;
			}
    		++j;
		}
		++i; j--;
	}
	cout << ans;
    return 0;
}

