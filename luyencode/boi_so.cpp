#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int xu_ly(long long a, long l, long r){
	int cnt = 1;
	int count = 0;
	for(int i = cnt ; i <= 1000000; ++i){
		if(l <= a*i && a*i <= r){
			++count;
		}
	}
	return count;
}

long long lcm(int a, int b){
	return a/__gcd(a, b) * b;
}
int main() {
	freopen("countdiv.inp", "r", stdin);
	freopen("countdiv.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long l, r; cin >> l >> r;
    	long long a, b; cin >> a >> b;
    	cout << xu_ly(a, l, r) + xu_ly(b, l, r) - xu_ly(lcm(a, b), l, r) << '\n';
//    	cout << count << '\n';
	}
    return 0;
}

