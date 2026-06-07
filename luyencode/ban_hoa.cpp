#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("sf.inp", "r", stdin);
	freopen("sf.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h; cin >> h;
    char hh; cin >> hh;
    int c; cin >> c;
    char hc; cin >> hc;
    int so; cin >> so;
    string xau = "";
    while(h--) xau += hh;
    while(c--) xau += hc;
    int ans = 0;
//    cout  << xau << '\n';
    for(int i = 0 ; i < so ; ++i){
    	if(xau[i] == 'H') ++ans;
	}
	cout << ans;
    return 0;
}

