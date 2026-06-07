#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp;
    while(n--){
    	int x; cin >> x;
    	++mp[x];
	}
	cout << Siz(mp) << '\n';
	for(const auto &it : mp) cout << it.first << ' ' << it.second << '\n';
    return 0;
}

