#include <bits/stdc++.h>
#define en '\n'
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("AQUERY.inp", "r", stdin);
	freopen("AQUERY.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin >> q;
    map <long, long> mp;
    while(q--){
    	long a, b; cin >> a >> b;
    	mp[a] += b;
	}
	long long k; cin >> k;
	for(const auto &it : mp){
		if(it.second < k){
			k -= it.second;
			if(k == 0){
				cout << it.first;
				break;  
			}
		}
		else{
			cout << it.first;
			break;
		}
	}
    return 0;
}

