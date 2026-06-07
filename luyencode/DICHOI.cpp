#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b;
    cin >> a >> b;
    int res = 0;
    long long ans = a;
    while(a + a <= b){
    	++res;
    	a += a;
	}
	if(a == b) cout << res;
	else cout << b - ans + res;
    return 0;
}
