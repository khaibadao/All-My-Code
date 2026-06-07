#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("fnumber.inp", "r", stdin);
//	freopen("fnumber.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    unordered_map <int, int> mp;
    vector <char> a(n);
    vector <int> b(n);
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	b[i] = a[i] - '0';
    	++mp[b[i]];
	}
	int res = 0;
	int so = 0;
	for(auto it : mp){
		if(it.second > res){
			res = it.second;
			so = it.first;
		}
	}
	int k_f = res;
	if(k_f >= k){
		cout << 0;
		return 0;
	}
//	sort(b.begin(), b.end());
//	auto it = lower_bound(b.begin(), b.end(), so);
//	auto at = upper_bound(b.begin(), b.end(), so);
//	int le = distance(b.begin(), it) - 1;
//	int ri = distance(b.begin(), at);
//	int ans = INT_MAX;
//	long long sum = 0;
//	for(int i = le; i >= 0 ; i--){
//		if(k_f == k){
//			ans = min(ans, sum);
//		}
//	}
	
    return 0;
}

