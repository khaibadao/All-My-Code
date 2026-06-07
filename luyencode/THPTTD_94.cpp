#include <bits/stdc++.h>
#define en '\n'
#define Siz(s) s.size()
using namespace std;

void xu_ly(int n){
	string xau = "8";
	int ans = n - 1;
	while(ans--){
		xau = '9' + xau;
		xau += '0';
	}
	xau += '1';
	cout << xau << en;
}
int main() {
	freopen("nine.inp", "r", stdin);
	freopen("nine.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	xu_ly(n);
	}
    return 0;
}

