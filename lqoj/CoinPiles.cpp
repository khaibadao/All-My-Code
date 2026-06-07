#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long a, b; cin >> a >> b;
    	if(a > b) swap(a, b);
    	(2*a >= b and (a + b) % 3 == 0) ? cout << "YES" << '\n' : cout << "NO" << '\n';
	}
    return 0;
}
