#include <bits/stdc++.h>
#define Mod 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;


int main() {
	freopen("chiak.inp", "r", stdin);
	freopen("chiak.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    long k; cin >> k;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    map <long long, int> mp;
    mp[0] = 1;
    int ans = 0;
    long long sum = 0;
    for(int i = 0 ; i < n ; ++i){
    	sum += a[i];
    	long long x = (sum%k + k) % k;
    	ans += mp[x];
    	++mp[x];
	}
	cout << ans;
    return 0;
}

