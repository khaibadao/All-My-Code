#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <int> a(n + 1);
    vector < pair <int, int>> paa;
    for(int i = 1 ; i <= n ; ++i){
    	cin >> a[i];
    	paa.push_back({i, a[i]});
	}
	sort(paa.begin(), paa.end());
//	for(int i = 0 ; i < Siz(paa); ++i) cout << paa[i].first << ' ' << paa[i].second << ' ' << i << "(i)" << '\n';
    int t; cin >> t;
    while(t--){
    	int k; cin >> k;
    	pair <int, int> ta = {0, k};
    	int res = 0;
    	auto it = lower_bound(paa.begin(), paa.end(), ta);
    	if (it != paa.end() && it -> first == ta.second) {
            res = distance(paa.begin(), it) + 1;
        } else {
            res = distance(paa.begin(), it);
        }
    	int count = INT_MAX;
    	for(int i = 0 ; i < res ; ++i){
    		count = min(count, paa[i].first);
//    		cout << paa[i].first << ' ' << paa[i].second << ' ' << count << '\n';
		}
		cout << count << '\n';
	}
    return 0;
}

