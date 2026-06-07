#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000007
using namespace std;

int main() {
	freopen("game.inp", "r", stdin);
	freopen("game.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b; cin >> a >> b;
    int res = 0;
    if(a > b){
    	res += a;
    	a -= 1;
		if(a > b){
			res += a;
		}else res += b;
	}else if(b > a){
		res += b;
		b -= 1;
		if(b > a){
			res += b;
		}else res += a;
	}else res = a*2;
	cout << res;
    return 0;
}

