#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
bool check(long n){
	int count = 0;
	for(int i = 2 ;i <= sqrt(n) ; ++i){
		if(n%i == 0){
			while(n%i == 0){
				++count;
				if(count > 2) return false;
				n /= i;
			}
		}
	}
	if(n != 1) ++count;
	if(count == 2) return true;
	return false;
}
int main() {
	freopen("number.inp", "r", stdin);
	freopen("number.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n; cin >> n;
    for(long i = n ; i <= n + 1000 ; ++i){
    	if(check(i)){
    		cout << i;
    		break;
		}
	}
    return 0;
}
