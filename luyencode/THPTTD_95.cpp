#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
long long prime[1001];
void sang(){
	prime[0] = 1;
	for(int i = 1 ; i <= 1000 ; ++i){
		prime[i] = prime[i - 1] * 2;
	}
}
int main() {
	freopen("protist.inp", "r", stdin);
	freopen("protist.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin >> t;
    sang();
//    string s; cin >> s;
//    long long l1 = 0, l2 = 0;
//    string xau = "";
//    for(int i = 0 ; i < Siz(s)/2 ; ++i){
//    	xau += s[i];
//	}
//	l1 = stoll(xau);
//	xau = "";
//	for(int i = Siz(s)/2 ; i < Siz(s) ; ++i){
//    	xau += s[i];
//	}
//	l2 = stoll(xau);
//	xau = "";
//	cout << l1 << ' ' << l2;
//	return 0;
//    sang();
    while(t--){
    	int x; cin >> x;
    	cout << prime[x] << '\n';
	}
    return 0;
}

