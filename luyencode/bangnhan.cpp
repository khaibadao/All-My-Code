#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("mtable.inp", "r", stdin);
//	freopen("mtable.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long x; cin >> x;
    vector <long long> v;
    for(int i = 1;  i <= sqrt(x); ++i){
    	if(x%i == 0){
    		if(i != x/i){
    			v.push_back(i);
    			v.push_back(x/i);
			}else v.push_back(i);
		}
	}
	for(int i = 0 ; i  < Siz(v) ; ++i) cout << v[i] << ' ';
	cout << '\n';	
//	bool check = true;
	sort(v.begin(), v.end(), greater <int> ());
	int count = 0;
	for(int i = v.size() - 1; i >= 0 ; i--){
		if(v[i]*n < x){
//			cout << v[i] << '\n';
			++count;
		}
		else break;
	}
	for(long it : v){
		if(it > n) ++count;
		else break;
	}
	cout << v.size() - count;
    return 0;
}
