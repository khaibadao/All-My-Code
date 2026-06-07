#include<bits/stdc++.h>
#define Siz(x) x.size()

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t; cin >> n >> t;
	vector <long> a(n);
	map <long, int> mp;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		++mp[a[i]];
	}
	sort(a.begin(), a.end());
	while(t--){
		long x; cin >> x;
		auto it = upper_bound(a.begin(), a.end(), x);
        if(it != a.begin()){
        	--it;
        	bool check = false;
        	while(1){
        		if(mp[*it]){
        			check = true;
        			--mp[*it];
        			cout << *it << '\n';
        			break;
				}
				if(it == a.begin()) break;
				it--;
			}
			if(!check) cout << -1 << '\n';
        }else cout << -1 << '\n';
//        sort(a.begin(), a.end());
	}
	return 0;
}
