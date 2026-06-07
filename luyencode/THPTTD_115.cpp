#include <bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int main() {
	freopen("cfile.inp", "r", stdin);
	freopen("cfile.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    vector <long> a(n);
    unordered_map <long, int> maa;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	++maa[a[i]];
	}
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0 ; i < n ; ++i){
    	long so = a[i];
    	for(const auto &it : maa){
    		if(so >= it.first*0.9){
    			if(so <= it.first && it.second > 0){
	    			cnt += it.second;
	    			if(it.first == so) --cnt;
				}
			}
		}
		maa[so] = 0;
	}
	cout << cnt;
    return 0;
}
