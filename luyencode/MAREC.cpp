#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp;
    int so = 0;
    while(n--){
    	int x; cin >> x;
    	so = x;
    	++mp[x];
	}
	int res = 0;
	if(Siz(mp) == 1 && mp[so] >= 4){
		return cout << 1, 0;
	}
	for(const auto &it : mp){
		if(it.second >= 2){
			int so = it.first;
			mp[so] -= 2;
			for(const auto &at : mp){
				if(at.second >= 2){
					++res;
				}
			}
			mp[so] = 0;
		}
	}
	cout << res;
    return 0;
}

