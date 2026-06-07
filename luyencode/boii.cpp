#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("MULT.INP", "r", stdin);
	freopen("MULT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long long a, b; cin >> a >> b;
    	cout << (long long)b/a << '\n';
	}
    return 0;
}

