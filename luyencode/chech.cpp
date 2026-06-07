#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

struct delon{
	int key;
	int X;
	int Y;
};

int main() {
//	freopen("chenhlech.inp", "r", stdin);
//	freopen("chenhlech.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    map <int, int> mp;
    vector <delon> paa;
    while(t--){
    	int x, y; cin >> x >> y;
    	int res = abs(x - y);
    	++mp[res];
    	delon capso;
//    	key = res;
    	capso.key = res;
    	capso.X = x;
		capso.Y = y;
		paa.push_back(capso);
	}
	int ans = 0, count = 0;
	for(auto it : mp){
		if(count < it.second){
			ans = it.first;
			count = it.second;
		}
	}
	cout << ans << '\n';
	for(const auto& it : paa){
		if(it.key == ans){
			cout << it.X << ' ' << it.Y << '\n';
		}
	}
    return 0;
}

