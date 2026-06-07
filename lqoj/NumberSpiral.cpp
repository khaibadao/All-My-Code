#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    while(n--){
    	long y, x; cin >> y >> x;
    	if(y >= x && y%2 == 0) cout << y*y - x + 1 << '\n';
    	else if(y >= x && y%2 != 0) cout << ((y - 1)*(y - 1)) + x << '\n';
    	else if(x > y && x%2 != 0) cout << x*x - y + 1 << '\n';
    	else if(x > y && x%2 == 0) cout << ((x - 1)*(x - 1)) + y << '\n';
	}
    return 0;
}
