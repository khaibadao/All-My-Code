#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("tich.inp", "r", stdin);
	freopen("tich.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b; cin >> a >> b;
    int sum = 0;
    while(a > 1){
    	if(a%2 == 0) sum += b;
    	b *= 2;
    	a /= 2;
	}
	cout << sum;
    return 0;
}

