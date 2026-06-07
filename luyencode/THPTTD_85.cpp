#include <bits/stdc++.h>
#define tatlem "cau1"
#define Siz(s) s.size()
using namespace std;

vector <int> v;
void sang(){
    for(int i = 30 ; i <= 1000000 ; i += 2){
    	int res = 0;
    	int n = i;
		for(int j = 2 ; j <= sqrt(n) ; ++j){
			if(n%j == 0){
				while(n%j == 0){
					n /= j;
				}
				++res;
			}
		}
		if(n != 1) ++res;
		if(res == 3) v.push_back(i);
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sang();
    int t; cin >> t;
    while(t--){
    	int l, r; cin >> l >> r;
    	auto it = lower_bound(v.begin(), v.end(), l);
    	auto at = upper_bound(v.begin(), v.end(), r);
    	int count = distance(it, at);
    	cout << count << '\n';
	}
    return 0;
}

